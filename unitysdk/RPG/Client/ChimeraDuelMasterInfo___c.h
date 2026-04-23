#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::GameCore { class ChimeraDuelMasterRow; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_CHIMERADUELMASTERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA01A2E0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA01A310)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C__GETORDEREDMASTER_B__6_0_OFFSET UNITYSDK_OFFSET(0xA01A3E0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0xA01A320)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_1_OFFSET UNITYSDK_OFFSET(0xA01A3A0)
#define RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_2_OFFSET UNITYSDK_OFFSET(0xA01A3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterInfo___c_TypeDefinitionIndex = 58382;

	class ChimeraDuelMasterInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::Boolean>** StaticGet___9__3_1()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x56860);
		}
		static ::System::Func_2<::RPG::GameCore::ChimeraDuelMasterRow*, ::RPG::Client::ChimeraDuelMasterData*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::RPG::GameCore::ChimeraDuelMasterRow*, ::RPG::Client::ChimeraDuelMasterData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x56868);
		}
		static ::RPG::Client::ChimeraDuelMasterInfo___c** StaticGet___9()
		{
			return (::RPG::Client::ChimeraDuelMasterInfo___c**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x56870);
		}
		static ::System::Comparison_1<::RPG::Client::ChimeraDuelMasterData*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::ChimeraDuelMasterData*>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x56878);
		}
		static ::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::UInt32>** StaticGet___9__3_2()
		{
			return (::System::Func_2<::RPG::Client::ChimeraDuelMasterData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(ChimeraDuelMasterInfo___c_TypeDefinitionIndex)->GetStaticField(0x56880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C__CTOR_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* __ctor_b__3_0(::RPG::GameCore::ChimeraDuelMasterRow* row)
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMasterRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_0_OFFSET))(this, row);
		}

		::System::Boolean __ctor_b__3_1(::RPG::Client::ChimeraDuelMasterData* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_1_OFFSET))(this, data);
		}

		::System::UInt32 __ctor_b__3_2(::RPG::Client::ChimeraDuelMasterData* data)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C___CTOR_B__3_2_OFFSET))(this, data);
		}

		::System::Int32 _GetOrderedMaster_b__6_0(::RPG::Client::ChimeraDuelMasterData* a, ::RPG::Client::ChimeraDuelMasterData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterData*, ::RPG::Client::ChimeraDuelMasterData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERINFO___C__GETORDEREDMASTER_B__6_0_OFFSET))(this, a, b);
		}
	};
}
