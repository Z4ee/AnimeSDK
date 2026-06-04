#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D311B9D517905070;
namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define CLASS_1_6DA6DDD878F74995_METHOD_1_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1365DB20)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1365D980)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_184AE6D5B1216FA2_OFFSET UNITYSDK_OFFSET(0x1365F080)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1365DDC0)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_1E1FFD875CA8014A_OFFSET UNITYSDK_OFFSET(0x1365EBC0)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0x1365E460)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_3585FE07989B4576_OFFSET UNITYSDK_OFFSET(0x1365DC30)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x1365ED70)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_629E32E556C851CD_OFFSET UNITYSDK_OFFSET(0x1365D9F0)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1365E300)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_9D895E27967F5974_OFFSET UNITYSDK_OFFSET(0x1365E820)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x1365E360)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x1365F020)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_B430F3DD5F896C88_OFFSET UNITYSDK_OFFSET(0x1365E8B0)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_D0D2894DFBF32E4A_OFFSET UNITYSDK_OFFSET(0x1365EDF0)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_EB7282B6745B4611_OFFSET UNITYSDK_OFFSET(0x1365DE20)
#define CLASS_1_6DA6DDD878F74995_METHOD_1_FDEE3759E3274AA5_OFFSET UNITYSDK_OFFSET(0x1365E140)
#define CLASS_1_6DA6DDD878F74995__CCTOR_OFFSET UNITYSDK_OFFSET(0x1365F120)
#define CLASS_1_6DA6DDD878F74995__CTOR_OFFSET UNITYSDK_OFFSET(0x1365CDC0)

inline static constexpr unsigned int Class_1_6DA6DDD878F74995_TypeDefinitionIndex = 56388;

class Class_1_6DA6DDD878F74995 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DA6DDD878F74995_TypeDefinitionIndex)->GetStaticField(0xE960);
	}
	::UnityEngine::Material* Field_1_1; // 0x10
	::UnityEngine::Transform* Field_1_2; // 0x18
	::UnityEngine::Texture* Field_1_3; // 0x20
	::UnityEngine::MeshRenderer* Field_1_4; // 0x28
	::UnityEngine::Material* Field_1_5; // 0x30
	::UnityEngine::Transform* Field_1_6; // 0x38
	::Class_1_D311B9D517905070* Field_1_7; // 0x40
	::UnityEngine::MaterialPropertyBlock* Field_1_8; // 0x48
	::UnityEngine::Texture* Field_1_9; // 0x50
	::UnityEngine::Transform* Field_1_10; // 0x58
	::UnityEngine::MeshRenderer* Field_1_11; // 0x60
	::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* Field_1_12; // 0x68
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Texture*>* Field_1_13; // 0x70
	::UnityEngine::Transform* Field_1_14; // 0x78
	::RPG::GameCore::ActivityDiceCombatDiceContentRow* Field_1_15; // 0x80
	::UnityEngine::Material* Field_1_16; // 0x88
	::UnityEngine::Texture* Field_1_17; // 0x90
	::System::UInt32 Field_1_18; // 0x98
	::System::UInt32 Field_1_19; // 0x9C
	::System::UInt32 Field_1_20; // 0xA0
	::System::UInt32 Field_1_21; // 0xA4

	::System::Void _ctor(::System::UInt32 a1, ::UnityEngine::Transform* a2, ::System::UInt32 a3, ::System::UInt32 a4, ::UnityEngine::Transform* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Transform*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995__CCTOR_OFFSET))();
	}

	::System::Void Method_1_FDEE3759E3274AA5(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_FDEE3759E3274AA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Void Method_1_EB7282B6745B4611()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_EB7282B6745B4611_OFFSET))(this);
	}

	::System::Void Method_1_B430F3DD5F896C88(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_B430F3DD5F896C88_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E1FFD875CA8014A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_1E1FFD875CA8014A_OFFSET))(this);
	}

	::System::Void Method_1_3585FE07989B4576(::UnityEngine::Texture* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_3585FE07989B4576_OFFSET))(this, a1);
	}

	::System::Void Method_1_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_1_629E32E556C851CD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_629E32E556C851CD_OFFSET))(this, a1);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_1_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_1_D0D2894DFBF32E4A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_D0D2894DFBF32E4A_OFFSET))(this);
	}

	::UnityEngine::Material* Method_1_9D895E27967F5974()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_9D895E27967F5974_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_184AE6D5B1216FA2()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_184AE6D5B1216FA2_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DA6DDD878F74995_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
