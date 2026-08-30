#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_57BF88AA3D4ADFA2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248;
class Class_2_049053A9DCD26B56;
class Class_2_94088BD52F494C82;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace RPG::GameCore { class SummonUnitChildBillboardHost; }
namespace RPG::GameCore { class SummonUnitChildEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define CLASS_1_61F66DDFF6FC7B36_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1643DDE0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_17BD30EFE8176014_1_OFFSET UNITYSDK_OFFSET(0x1643F8E0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0x1643F400)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_26FAC7D1946F2C78_OFFSET UNITYSDK_OFFSET(0x1643E3F0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_39CF329C9DA015B1_OFFSET UNITYSDK_OFFSET(0x1643E160)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_5CF0E897568EE98D_OFFSET UNITYSDK_OFFSET(0x1643E1B0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0x1643EB70)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_7DB5048369C91953_OFFSET UNITYSDK_OFFSET(0x1643F450)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET UNITYSDK_OFFSET(0x1643EA80)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_9C5FE2400288EFCC_OFFSET UNITYSDK_OFFSET(0x1643E270)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_9D7FAF6B530F3E98_OFFSET UNITYSDK_OFFSET(0x1643E0B0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x1643DEC0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x1643F930)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_C73CBB2E1F3BBA7B_OFFSET UNITYSDK_OFFSET(0x1643DF80)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_C7D68333A84CD917_OFFSET UNITYSDK_OFFSET(0x1643EED0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_C8B2338885B4A0AD_OFFSET UNITYSDK_OFFSET(0x1643EFE0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1643EF60)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x1643EFA0)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1643EF20)
#define CLASS_1_61F66DDFF6FC7B36_METHOD_1_E44C4B1878F85417_OFFSET UNITYSDK_OFFSET(0x1643EE70)
#define CLASS_1_61F66DDFF6FC7B36__CTOR_OFFSET UNITYSDK_OFFSET(0x1643DD50)

inline static constexpr unsigned int Class_1_61F66DDFF6FC7B36_TypeDefinitionIndex = 57604;

class Class_1_61F66DDFF6FC7B36 : public ::System::Object
{
public:
	::Class_2_94088BD52F494C82* JHFKOHNKLMH; // 0x10
	::System::Collections::Generic::LinkedList_1<::Class_1_04E8A8CB715F95A7_Class_1_F9EEB1063E933248*>* PCOFNNCJJLH; // 0x18
	::RPG::GameCore::SummonUnitChildEffectConfig* IBNEODGBKPB; // 0x20
	::RPG::GameCore::SummonUnitChildBillboardHost* JGLHHFGGHAA; // 0x28
	::RPG::GameCore::SummonUnitChildEffectConfig* LFOJLEOAAHJ; // 0x30
	::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x38
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x40
	::System::Single CBJEFEAKKPE; // 0x50
	::System::Single NONAGBGPMKF; // 0x54
	::System::Single CMBADIEHEGB; // 0x58
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x5C
	::System::Single HKGPLKJOCDH; // 0x68
	::System::Boolean IMAJLPIFLNN; // 0x6C

	::System::Void _ctor(::Class_2_94088BD52F494C82* a1, ::Class_2_049053A9DCD26B56* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_94088BD52F494C82*, ::Class_2_049053A9DCD26B56*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_C73CBB2E1F3BBA7B(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_C73CBB2E1F3BBA7B_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_9D7FAF6B530F3E98(::RPG::GameCore::PlayNPCBubbleTalk* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_9D7FAF6B530F3E98_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* Method_1_39CF329C9DA015B1(::System::String* a1)
	{
		return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_39CF329C9DA015B1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5CF0E897568EE98D(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_5CF0E897568EE98D_OFFSET))(this, a1);
	}

	::System::Void Method_1_9C5FE2400288EFCC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_9C5FE2400288EFCC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_26FAC7D1946F2C78(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_26FAC7D1946F2C78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C4AEC0BC1CA0CB4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_8C4AEC0BC1CA0CB4_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F7271C62F1FE776(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_6F7271C62F1FE776_OFFSET))(this, a1);
	}

	::System::Void Method_1_E44C4B1878F85417(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_E44C4B1878F85417_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C7D68333A84CD917(::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Struct_2_57BF88AA3D4ADFA2>*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_C7D68333A84CD917_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_C8B2338885B4A0AD(::UnityEngine::Animator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_C8B2338885B4A0AD_OFFSET))(this, a1);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_17BD30EFE8176014_1_OFFSET))(this);
	}

	::System::Void Method_1_7DB5048369C91953(::RPG::GameCore::SummonUnitChildEffectConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SummonUnitChildEffectConfig*))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_7DB5048369C91953_OFFSET))(this, a1);
	}

	::System::Void Method_1_AA169839CB93802A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_AA169839CB93802A_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61F66DDFF6FC7B36_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
