#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C.h"
#include "unitysdk/Class_2_945F852A8B481F54.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Enum_3_337A0D7142819EB2.h"
#include "unitysdk/Enum_3_65BB655811A73E3A.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_297;
class Class_2_F3CFF1AFF7EE7DCD;
class Class_3_07AAFA6F7F79BEB3;
class Class_3_4C86592FFA881343;
class Class_3_5203B7D603EEC4F6;
class Class_3_5CB4F60E5FD4D81A;
class Class_3_A7F1CBF026E489C4_4;
class Class_3_B9139BC69ED28078;
class Class_3_BF299C6F59BB69F7;
class Class_3_DA0192093E78CE1E;
class Class_3_E0C3A718B3D8D6A7;
class Class_3_F41D242A20F8FE06;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_27F786FF2A30778C;

#define CLASS_3_F67472AB575CAD5E_METHOD_3_14AFBA2E8A242644_OFFSET UNITYSDK_OFFSET(0x125A8CE0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_15C52992FBBEE45B_OFFSET UNITYSDK_OFFSET(0x125A9390)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_2C6E3FF509A63387_OFFSET UNITYSDK_OFFSET(0x125A8A20)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x125A8C40)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_4E22A18EF530BFA8_OFFSET UNITYSDK_OFFSET(0x125AA000)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_517385ECBBF41DC0_OFFSET UNITYSDK_OFFSET(0x125A84E0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_651BDCFF8B1FE0AF_OFFSET UNITYSDK_OFFSET(0x125AA8E0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_6DC66D057E618CD2_OFFSET UNITYSDK_OFFSET(0x125AA2A0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x125A9320)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_9C8517FE7C54A488_OFFSET UNITYSDK_OFFSET(0x125AA550)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_AE892CB64AB1C650_OFFSET UNITYSDK_OFFSET(0x125A7A90)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_BA937D14413CE9EE_OFFSET UNITYSDK_OFFSET(0x125AA1D0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_BE7E97B21BBB69F5_OFFSET UNITYSDK_OFFSET(0x125A6FE0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_C92ED015C048D2B8_OFFSET UNITYSDK_OFFSET(0x125A8570)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_E150FB2C9CE1779C_OFFSET UNITYSDK_OFFSET(0x125A75D0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_E561DA526F8AD83A_OFFSET UNITYSDK_OFFSET(0x125AA0D0)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_EA2192E599D331D8_OFFSET UNITYSDK_OFFSET(0x125A7B30)
#define CLASS_3_F67472AB575CAD5E_METHOD_3_F13C6980833632E4_OFFSET UNITYSDK_OFFSET(0x125A8890)
#define CLASS_3_F67472AB575CAD5E__CTOR_OFFSET UNITYSDK_OFFSET(0x125A74B0)

inline static constexpr unsigned int Class_3_F67472AB575CAD5E_TypeDefinitionIndex = 44206;

class Class_3_F67472AB575CAD5E : public ::Class_2_945F852A8B481F54
{
public:
	::System::Collections::Generic::List_1<::System::Tuple_2<::Class_3_F41D242A20F8FE06*, ::Class_3_5CB4F60E5FD4D81A*>*>* Field_3_7; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Battle::Entity*>*>* Field_3_0; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E__CTOR_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_BE7E97B21BBB69F5(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* a10, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a11)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_BE7E97B21BBB69F5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	::System::Void Method_3_E150FB2C9CE1779C(::Class_3_DA0192093E78CE1E* a1, ::Class_3_A7F1CBF026E489C4_4* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_DA0192093E78CE1E*, ::Class_3_A7F1CBF026E489C4_4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_E150FB2C9CE1779C_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_AE892CB64AB1C650(::Class_3_DA0192093E78CE1E* a1, ::Class_3_A7F1CBF026E489C4_4* a2, ::System::Boolean a3)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Class_3_DA0192093E78CE1E*, ::Class_3_A7F1CBF026E489C4_4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_AE892CB64AB1C650_OFFSET))(this, a1, a2, a3);
	}

	::MoleMole::Battle::Entity* Method_3_EA2192E599D331D8(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::MoleMole::Config::CampType a5, ::System::Boolean a6, ::Enum_3_65BB655811A73E3A a7, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>* a8, ::Class_3_B9139BC69ED28078* a9)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::MoleMole::Config::CampType, ::System::Boolean, ::Enum_3_65BB655811A73E3A, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::BaseProperty, ::System::Single>*, ::Class_3_B9139BC69ED28078*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_EA2192E599D331D8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_517385ECBBF41DC0(::MoleMole::Battle::Entity* a1, ::Class_3_E0C3A718B3D8D6A7* a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_E0C3A718B3D8D6A7*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_517385ECBBF41DC0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_C92ED015C048D2B8(::MoleMole::Battle::Entity* a1, ::Class_1_27F786FF2A30778C<::Class_3_BF299C6F59BB69F7*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_1_27F786FF2A30778C<::Class_3_BF299C6F59BB69F7*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_C92ED015C048D2B8_OFFSET))(this, a1, a2);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*> Method_3_F13C6980833632E4(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_3_5203B7D603EEC4F6* a5)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::MoleMole::Battle::Entity*>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_5203B7D603EEC4F6*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_F13C6980833632E4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::MoleMole::Battle::Entity* Method_3_2C6E3FF509A63387(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_2C6E3FF509A63387_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_3_14AFBA2E8A242644()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_14AFBA2E8A242644_OFFSET))(this);
	}

	::System::Void Method_3_15C52992FBBEE45B(::MoleMole::Battle::Entity* a1, ::Class_3_07AAFA6F7F79BEB3* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_15C52992FBBEE45B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_4E22A18EF530BFA8(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_4E22A18EF530BFA8_OFFSET))(this, a1);
	}

	static ::Class_3_F67472AB575CAD5E* Method_3_E561DA526F8AD83A()
	{
		return ((::Class_3_F67472AB575CAD5E*(*)())((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_E561DA526F8AD83A_OFFSET))();
	}

	::Cysharp::Threading::Tasks::UniTask Method_3_BA937D14413CE9EE(::Class_3_07AAFA6F7F79BEB3* a1)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::Class_3_07AAFA6F7F79BEB3*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_BA937D14413CE9EE_OFFSET))(this, a1);
	}

	::MoleMole::Battle::Entity* Method_3_6DC66D057E618CD2(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::System::Single a4, ::Class_3_4C86592FFA881343* a5)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::System::Single, ::Class_3_4C86592FFA881343*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_6DC66D057E618CD2_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_9C8517FE7C54A488(::System::Int32 a1, ::System::Int32 a2, ::MoleMole::Battle::Entity* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_9C8517FE7C54A488_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::MoleMole::Battle::Entity* Method_3_651BDCFF8B1FE0AF(::System::Int32 a1, ::System::Int32 a2, ::UnityEngine::Vector3 a3, ::Enum_3_337A0D7142819EB2 a4, ::UnityEngine::Vector3 a5, ::System::Single a6, ::System::Boolean a7, ::System::Int32 a8, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C> a9, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>* a10, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>* a11)
	{
		return ((::MoleMole::Battle::Entity*(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::Enum_3_337A0D7142819EB2, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean, ::System::Int32, ::System::Nullable_1<::Class_1_C4CB11A2FD957208_Struct_2_E81A211B6662113C>, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_297*>*, ::System::Collections::Generic::List_1<::Class_2_F3CFF1AFF7EE7DCD*>*))((::PBYTE)hIl2Cpp + CLASS_3_F67472AB575CAD5E_METHOD_3_651BDCFF8B1FE0AF_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}
};
