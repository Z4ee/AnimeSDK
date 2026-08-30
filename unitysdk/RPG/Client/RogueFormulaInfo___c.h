#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueFormulaCategory.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueFormulaData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_ROGUEFORMULAINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC8D0D0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC8D100)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETALLULTIMATEFORMULAS_B__17_0_OFFSET UNITYSDK_OFFSET(0x1BC8D280)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDACHIEVEDFORMULAS_B__14_0_OFFSET UNITYSDK_OFFSET(0x1BC8D130)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDALLACTIVIATEDFORMULAS_B__16_0_OFFSET UNITYSDK_OFFSET(0x1BC8D210)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDSHOWNFORMULASBYSTATE_B__15_1_OFFSET UNITYSDK_OFFSET(0x1BC8D1A0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_0_OFFSET UNITYSDK_OFFSET(0x1BC8D110)
#define RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_1_OFFSET UNITYSDK_OFFSET(0x1BC8D120)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_1_OFFSET UNITYSDK_OFFSET(0x1BC8D2B0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_2_OFFSET UNITYSDK_OFFSET(0x1BC8D2D0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_3_OFFSET UNITYSDK_OFFSET(0x1BC8D2F0)
#define RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_4_OFFSET UNITYSDK_OFFSET(0x1BC8D310)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueFormulaInfo___c_TypeDefinitionIndex = 67215;

	class RogueFormulaInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67110);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>** StaticGet___9__29_4()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67118);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67120);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>** StaticGet___9__9_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67128);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Boolean>** StaticGet___9__17_0()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67130);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>** StaticGet___9__29_2()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::RPG::GameCore::RogueFormulaCategory>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67138);
		}
		static ::RPG::Client::RogueFormulaInfo___c** StaticGet___9()
		{
			return (::RPG::Client::RogueFormulaInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67140);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>** StaticGet___9__29_3()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67148);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67150);
		}
		static ::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::RPG::Client::RogueFormulaData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67158);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(RogueFormulaInfo___c_TypeDefinitionIndex)->GetStaticField(0x67160);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__CTOR_OFFSET))(this);
		}

		::System::UInt32 _RefreshBuffCountValue_b__9_0(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_0_OFFSET))(this, a1);
		}

		::System::Int32 _RefreshBuffCountValue_b__9_1(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Int32>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__REFRESHBUFFCOUNTVALUE_B__9_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedAchievedFormulas_b__14_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDACHIEVEDFORMULAS_B__14_0_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedShownFormulasByState_b__15_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDSHOWNFORMULASBYSTATE_B__15_1_OFFSET))(this, a1);
		}

		::System::UInt32 _GetSortedAllActiviatedFormulas_b__16_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETSORTEDALLACTIVIATEDFORMULAS_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetAllUltimateFormulas_b__17_0(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C__GETALLULTIMATEFORMULAS_B__17_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetSortedFormulasOnBuffChangeImpl_b__29_1(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueFormulaCategory __GetSortedFormulasOnBuffChangeImpl_b__29_2(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::RPG::GameCore::RogueFormulaCategory(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_2_OFFSET))(this, a1);
		}

		::System::Int32 __GetSortedFormulasOnBuffChangeImpl_b__29_3(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_3_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueFormulaCategory __GetSortedFormulasOnBuffChangeImpl_b__29_4(::RPG::Client::RogueFormulaData* a1)
		{
			return ((::RPG::GameCore::RogueFormulaCategory(*)(::PVOID, ::RPG::Client::RogueFormulaData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEFORMULAINFO___C___GETSORTEDFORMULASONBUFFCHANGEIMPL_B__29_4_OFFSET))(this, a1);
		}
	};
}
