#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::MVVM::View { class CatGodGetShelfWindow; }

#define CLASS_1_43BD383C98B4C0C5_170_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1257B7D0)
#define CLASS_1_43BD383C98B4C0C5_170_METHOD_1_8B10788D49CC0CAD_OFFSET UNITYSDK_OFFSET(0x1257B870)
#define CLASS_1_43BD383C98B4C0C5_170_METHOD_1_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x1257B810)
#define CLASS_1_43BD383C98B4C0C5_170__CTOR_OFFSET UNITYSDK_OFFSET(0x1257BA50)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_170_TypeDefinitionIndex = 68487;

class Class_1_43BD383C98B4C0C5_170 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_170__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_170_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_170_METHOD_1_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::RPG::Client::MVVM::View::CatGodGetShelfWindow* Method_1_8B10788D49CC0CAD()
	{
		return ((::RPG::Client::MVVM::View::CatGodGetShelfWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_170_METHOD_1_8B10788D49CC0CAD_OFFSET))(this);
	}
};
