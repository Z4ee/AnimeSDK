#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"

namespace MoleMole { class MonoPartySceneObject; }

#define CLASS_3_8D7300F8D9E18805_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xD59BD50)
#define CLASS_3_8D7300F8D9E18805_METHOD_3_2310BEFD08A61A42_OFFSET UNITYSDK_OFFSET(0xD59BE30)
#define CLASS_3_8D7300F8D9E18805_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xD59BF00)
#define CLASS_3_8D7300F8D9E18805_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0xD59BE80)
#define CLASS_3_8D7300F8D9E18805_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xD59BD00)
#define CLASS_3_8D7300F8D9E18805__CCTOR_OFFSET UNITYSDK_OFFSET(0xD59BDA0)
#define CLASS_3_8D7300F8D9E18805__CTOR_OFFSET UNITYSDK_OFFSET(0xD59BE20)

inline static constexpr unsigned int Class_3_8D7300F8D9E18805_TypeDefinitionIndex = 69192;

class Class_3_8D7300F8D9E18805 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_3 = 0xAA; // 0x0
	::MoleMole::MonoPartySceneObject* Field_3_0; // 0x48
	::System::Single Field_3_1; // 0x50
	::System::UInt32 Field_3_2; // 0x54

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805_GETCLASSID_OFFSET))(this);
	}

	::System::Void Method_3_2310BEFD08A61A42(::MoleMole::MonoPartySceneObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoPartySceneObject*))((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805_METHOD_3_2310BEFD08A61A42_OFFSET))(this, a1);
	}

	static ::Class_3_8D7300F8D9E18805* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_8D7300F8D9E18805*(*)())((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8D7300F8D9E18805_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
