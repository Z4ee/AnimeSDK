#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_72305E8DFABA2803.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_7BF98046FA3EA064;
class Class_3_8B39EC2B87933E91;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_A2809E685EB92269_METHOD_2_0196F1CEB7DA405C_OFFSET UNITYSDK_OFFSET(0x12BB81D0)
#define CLASS_2_A2809E685EB92269_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x12BB7E50)
#define CLASS_2_A2809E685EB92269_METHOD_2_31B71B6D307F7F0C_OFFSET UNITYSDK_OFFSET(0x12BB7D10)
#define CLASS_2_A2809E685EB92269_METHOD_2_3ED1C52E3DFC7548_OFFSET UNITYSDK_OFFSET(0x12BB8020)
#define CLASS_2_A2809E685EB92269_METHOD_2_46CBB6E1372C6F8F_OFFSET UNITYSDK_OFFSET(0x12BB80A0)
#define CLASS_2_A2809E685EB92269_METHOD_2_6703F0BABA604106_OFFSET UNITYSDK_OFFSET(0x12BB8030)
#define CLASS_2_A2809E685EB92269_METHOD_2_77FD543600E00498_OFFSET UNITYSDK_OFFSET(0x12BB8140)
#define CLASS_2_A2809E685EB92269_METHOD_2_A0042105686D97E8_OFFSET UNITYSDK_OFFSET(0x12BB8130)
#define CLASS_2_A2809E685EB92269_METHOD_2_AB1452679FE48B91_OFFSET UNITYSDK_OFFSET(0x12BB7D90)
#define CLASS_2_A2809E685EB92269_METHOD_2_AE9C5765515E4E05_OFFSET UNITYSDK_OFFSET(0x12BB8040)
#define CLASS_2_A2809E685EB92269_METHOD_2_E6FB44D7ED26A2F9_OFFSET UNITYSDK_OFFSET(0x12BB7E80)
#define CLASS_2_A2809E685EB92269_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12BB8200)
#define CLASS_2_A2809E685EB92269_METHOD_2_F239777256F9BA8F_OFFSET UNITYSDK_OFFSET(0x12BB8120)
#define CLASS_2_A2809E685EB92269__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BB7E70)
#define CLASS_2_A2809E685EB92269__CTOR_OFFSET UNITYSDK_OFFSET(0x12BB7C60)

inline static constexpr unsigned int Class_2_A2809E685EB92269_TypeDefinitionIndex = 84426;

class Class_2_A2809E685EB92269 : public ::Class_1_72305E8DFABA2803
{
public:
	static ::System::Int32* StaticGet_Field_2_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_A2809E685EB92269_TypeDefinitionIndex)->GetStaticField(0xE9D0);
	}
	::MoleMole::Config::InteractEntry* Field_2_0; // 0x48
	::Class_3_7BF98046FA3EA064* Field_2_5; // 0x50
	::MoleMole::Battle::Entity* Field_2_1; // 0x58
	::Class_3_8B39EC2B87933E91* Field_2_4; // 0x60
	::System::Boolean Field_2_6; // 0x68
	::System::Int32 Field_2_7; // 0x6C

	::System::Void _ctor(::MoleMole::Battle::Entity* a1, ::System::Action_1<::System::Int32>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269__CTOR_OFFSET))(this, a1, a2);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 Method_2_31B71B6D307F7F0C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_31B71B6D307F7F0C_OFFSET))(this);
	}

	::System::String* Method_2_AB1452679FE48B91()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_AB1452679FE48B91_OFFSET))(this);
	}

	::System::Boolean Method_2_E6FB44D7ED26A2F9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_E6FB44D7ED26A2F9_OFFSET))(this);
	}

	::System::String* Method_2_3ED1C52E3DFC7548()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_3ED1C52E3DFC7548_OFFSET))(this);
	}

	::MoleMole::Config::InteractEntry* Method_2_6703F0BABA604106()
	{
		return ((::MoleMole::Config::InteractEntry*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_6703F0BABA604106_OFFSET))(this);
	}

	::System::Void Method_2_AE9C5765515E4E05(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_AE9C5765515E4E05_OFFSET))(this, a1);
	}

	::Class_3_8B39EC2B87933E91* Method_2_F239777256F9BA8F()
	{
		return ((::Class_3_8B39EC2B87933E91*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_F239777256F9BA8F_OFFSET))(this);
	}

	::System::Void Method_2_A0042105686D97E8(::Class_3_8B39EC2B87933E91* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8B39EC2B87933E91*))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_A0042105686D97E8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_77FD543600E00498()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_77FD543600E00498_OFFSET))(this);
	}

	::System::Void Method_2_46CBB6E1372C6F8F(::MoleMole::Config::InteractEntry*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*&))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_46CBB6E1372C6F8F_OFFSET))(this, a1);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_128774387667156B_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_0196F1CEB7DA405C()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_0196F1CEB7DA405C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2809E685EB92269_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};
