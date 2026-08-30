#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_38BE07B1D66262C2;
class Class_2_792B76992050D353;
namespace RPG::Client::Prop { class ChimeraDuelNpcModelView; }

#define CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x152564B0)
#define CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET UNITYSDK_OFFSET(0x152566E0)
#define CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15256D00)
#define CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET UNITYSDK_OFFSET(0x152564A0)

inline static constexpr unsigned int Class_2_63052BAB61EF0BCD_TypeDefinitionIndex = 77784;

class Class_2_63052BAB61EF0BCD : public ::Class_1_FD611945730E269E
{
public:
	static ::System::Int32* StaticGet_CEMIJHIHOEN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0x13F50);
	}
	static ::System::Int32* StaticGet_HEOKJKOGNBK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_63052BAB61EF0BCD_TypeDefinitionIndex)->GetStaticField(0x13F54);
	}
	::RPG::Client::Prop::ChimeraDuelNpcModelView* ILAJEHHAPBD; // 0x18
	::Class_2_38BE07B1D66262C2* EEFMDEHLLFI; // 0x20
	::Class_2_792B76992050D353* MKKLHFCCCNF; // 0x28
	::UnityEngine::Vector3 OIMMGKNHKOA; // 0x30
	::UnityEngine::Quaternion HBAIICJGPGC; // 0x3C
	::System::Single FOMCKBAHCFM; // 0x4C
	::System::Single ANIPBKCEANB; // 0x50
	::System::Boolean CMPCNMBHDBE; // 0x54

	::System::Void _ctor(::Class_2_792B76992050D353* a1, ::Class_2_38BE07B1D66262C2* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_792B76992050D353*, ::Class_2_38BE07B1D66262C2*))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD__CCTOR_OFFSET))();
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_2_D43B99F9545128F5(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_63052BAB61EF0BCD_METHOD_2_D43B99F9545128F5_OFFSET))(this, a1);
	}
};
