#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::CatGod { class CatGodGetShelfWindow; }

#define CLASS_1_46A03DD566E35E94_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15854C70)
#define CLASS_1_46A03DD566E35E94_METHOD_1_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0x15854CB0)
#define CLASS_1_46A03DD566E35E94_METHOD_1_6F2009D558BA3D86_OFFSET UNITYSDK_OFFSET(0x15854D10)
#define CLASS_1_46A03DD566E35E94__CTOR_OFFSET UNITYSDK_OFFSET(0x15854ED0)

inline static constexpr unsigned int Class_1_46A03DD566E35E94_TypeDefinitionIndex = 80324;

class Class_1_46A03DD566E35E94 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46A03DD566E35E94__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46A03DD566E35E94_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46A03DD566E35E94_METHOD_1_52607DE4C357D269_OFFSET))(this);
	}

	::RPG::Client::CatGod::CatGodGetShelfWindow* Method_1_6F2009D558BA3D86()
	{
		return ((::RPG::Client::CatGod::CatGodGetShelfWindow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_46A03DD566E35E94_METHOD_1_6F2009D558BA3D86_OFFSET))(this);
	}
};
