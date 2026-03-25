#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_49A6A53841325E0D_METHOD_1_6946C610D47FE5F0_OFFSET UNITYSDK_OFFSET(0xB2755B0)
#define CLASS_1_49A6A53841325E0D_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0xB275600)
#define CLASS_1_49A6A53841325E0D_METHOD_1_C4055CEF8118F224_OFFSET UNITYSDK_OFFSET(0xB275770)
#define CLASS_1_49A6A53841325E0D_METHOD_1_E4886687508BA48F_OFFSET UNITYSDK_OFFSET(0xB275480)
#define CLASS_1_49A6A53841325E0D__CTOR_OFFSET UNITYSDK_OFFSET(0xB275550)

inline static constexpr unsigned int Class_1_49A6A53841325E0D_TypeDefinitionIndex = 50845;

class Class_1_49A6A53841325E0D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D__CTOR_OFFSET))(this);
	}

	static ::Class_1_49A6A53841325E0D* Method_1_E4886687508BA48F()
	{
		return ((::Class_1_49A6A53841325E0D*(*)())((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_E4886687508BA48F_OFFSET))();
	}

	::System::Void Method_1_6946C610D47FE5F0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_6946C610D47FE5F0_OFFSET))(this);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_C4055CEF8118F224(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + CLASS_1_49A6A53841325E0D_METHOD_1_C4055CEF8118F224_OFFSET))(this, a1);
	}
};
