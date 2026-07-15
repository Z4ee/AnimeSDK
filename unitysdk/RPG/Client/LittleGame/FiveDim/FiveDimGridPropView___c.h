#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView; }
namespace RPG::Client::LittleGame::FiveDim { class FiveDimGridPropView_Class_1_8C99D32A1F367FCF; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x189FAFC0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__CTOR_OFFSET UNITYSDK_OFFSET(0x189FAFF0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__POSTLOADASYNC_B__4_0_OFFSET UNITYSDK_OFFSET(0x189FB000)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___ONCELLASYNCLOADFINISH_B__16_0_OFFSET UNITYSDK_OFFSET(0x189FB020)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___TRYINITWATERREFLECTIONV2_B__26_0_OFFSET UNITYSDK_OFFSET(0x189FB040)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimGridPropView___c_TypeDefinitionIndex = 73236;

	class FiveDimGridPropView___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView*>** StaticGet___9__26_0()
		{
			return (::System::Action_1<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView*>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimGridPropView___c_TypeDefinitionIndex)->GetStaticField(0x3B040);
		}
		static ::System::Func_2<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF*, ::System::Boolean>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimGridPropView___c_TypeDefinitionIndex)->GetStaticField(0x3B048);
		}
		static ::System::Func_2<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FiveDimGridPropView___c_TypeDefinitionIndex)->GetStaticField(0x3B050);
		}
		static ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView___c** StaticGet___9()
		{
			return (::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView___c**)Il2CppClass::FromTypeDefinitionIndex(FiveDimGridPropView___c_TypeDefinitionIndex)->GetStaticField(0x3B058);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _PostLoadAsync_b__4_0(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C__POSTLOADASYNC_B__4_0_OFFSET))(this, a1);
		}

		::System::Boolean __OnCellAsyncLoadFinish_b__16_0(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView_Class_1_8C99D32A1F367FCF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___ONCELLASYNCLOADFINISH_B__16_0_OFFSET))(this, a1);
		}

		::System::Void __TryInitWaterReflectionV2_b__26_0(::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FiveDim::FiveDimGridPropView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMGRIDPROPVIEW___C___TRYINITWATERREFLECTIONV2_B__26_0_OFFSET))(this, a1);
		}
	};
}
