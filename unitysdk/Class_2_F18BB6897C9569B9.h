#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C836D00248E6EFFE.h"
#include "unitysdk/Enum_3_7CF6DCCA0AF3DB5F.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_0F138252A5783001;
class Class_2_14986121AA61AD99;
class Class_2_1C93660C39236995;
class Class_2_2F4CE9A3C30CD7F4;
class Class_3_0F2151E667BC75A0;
class Class_3_707412604A129938;
class Class_3_E2819F45333A39BF;
class Class_3_F41D242A20F8FE06;
class Class_3_F97B015544BE936B;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigEntityAnimEvent; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define CLASS_2_F18BB6897C9569B9_METHOD_2_1392D0D304F76AE4_OFFSET UNITYSDK_OFFSET(0x13E26BB0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x13E26B50)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x13E25AE0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_33AEFB041A71ABC5_OFFSET UNITYSDK_OFFSET(0x13E28340)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_33B1098CBCE7AEF5_OFFSET UNITYSDK_OFFSET(0x13E25A40)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x13E258B0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_42195A2F8FE5648B_OFFSET UNITYSDK_OFFSET(0x13E25B80)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x13E259C0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_4CF8075F9D709990_OFFSET UNITYSDK_OFFSET(0x13E26A40)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_6F84BD714F5B57DC_OFFSET UNITYSDK_OFFSET(0x13E26940)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_7736FD97E605D844_OFFSET UNITYSDK_OFFSET(0x13E25F00)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_7879DC683C525398_OFFSET UNITYSDK_OFFSET(0x13E27EA0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_960032BA2E22793D_OFFSET UNITYSDK_OFFSET(0x13E25440)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_98511BB23D2E3748_OFFSET UNITYSDK_OFFSET(0x13E263C0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_A4C9499E519D205D_OFFSET UNITYSDK_OFFSET(0x13E252C0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_B25CE6E0DE24C636_OFFSET UNITYSDK_OFFSET(0x13E26450)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13E27E10)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x13E282B0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13E25970)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_DEB7D04EE9D67260_OFFSET UNITYSDK_OFFSET(0x13E253B0)
#define CLASS_2_F18BB6897C9569B9_METHOD_2_FB2A76241EC76140_OFFSET UNITYSDK_OFFSET(0x13E267F0)
#define CLASS_2_F18BB6897C9569B9__CTOR_OFFSET UNITYSDK_OFFSET(0x13E25AD0)

inline static constexpr unsigned int Class_2_F18BB6897C9569B9_TypeDefinitionIndex = 65319;

class Class_2_F18BB6897C9569B9 : public ::Class_1_C836D00248E6EFFE
{
public:
	::Class_3_0F2151E667BC75A0* Field_2_0; // 0x50
	::System::Single Field_2_2; // 0x58
	::System::Boolean Field_2_1; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4C9499E519D205D(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_A4C9499E519D205D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_DEB7D04EE9D67260(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_DEB7D04EE9D67260_OFFSET))(this, a1);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_33B1098CBCE7AEF5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_33B1098CBCE7AEF5_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_42195A2F8FE5648B(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_42195A2F8FE5648B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_98511BB23D2E3748(::Class_2_2F4CE9A3C30CD7F4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2F4CE9A3C30CD7F4*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_98511BB23D2E3748_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_2_B25CE6E0DE24C636()
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_B25CE6E0DE24C636_OFFSET))(this);
	}

	::System::Boolean Method_2_7736FD97E605D844(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::Il2CppArray<::UnityEngine::RaycastHit>* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::RaycastHit>*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_7736FD97E605D844_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_960032BA2E22793D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_960032BA2E22793D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_1392D0D304F76AE4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_1392D0D304F76AE4_OFFSET))(this, a1);
	}

	::System::Void Method_2_7879DC683C525398(::Class_3_F97B015544BE936B* a1, ::Class_3_707412604A129938* a2, ::Class_3_E2819F45333A39BF* a3, ::UnityEngine::Vector3 a4, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>* a5, ::MoleMole::Battle::Entity* a6, ::MoleMole::Config::ConfigEntityAnimEvent* a7, ::System::UInt32 a8)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F97B015544BE936B*, ::Class_3_707412604A129938*, ::Class_3_E2819F45333A39BF*, ::UnityEngine::Vector3, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CF6DCCA0AF3DB5F>*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::ConfigEntityAnimEvent*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_7879DC683C525398_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
	}

	::System::Boolean Method_2_FB2A76241EC76140(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_FB2A76241EC76140_OFFSET))(this, a1);
	}

	::System::Single Method_2_4CF8075F9D709990(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_4CF8075F9D709990_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_2_33AEFB041A71ABC5(::Class_3_F41D242A20F8FE06* a1, ::Class_2_14986121AA61AD99* a2, ::Class_2_1C93660C39236995* a3, ::Class_2_0F138252A5783001* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_F41D242A20F8FE06*, ::Class_2_14986121AA61AD99*, ::Class_2_1C93660C39236995*, ::Class_2_0F138252A5783001*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_33AEFB041A71ABC5_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_6F84BD714F5B57DC(::MoleMole::Battle::Entity* a1, ::UnityEngine::Collider* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_2_F18BB6897C9569B9_METHOD_2_6F84BD714F5B57DC_OFFSET))(this, a1, a2);
	}
};
