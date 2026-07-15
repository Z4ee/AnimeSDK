#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
#include "unitysdk/Struct_2_E03B78B927A9E70C_5.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_15D9626FE8E7452F_OFFSET UNITYSDK_OFFSET(0x14D09B40)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_36633888A896DA63_OFFSET UNITYSDK_OFFSET(0x14D09FC0)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0x14D093C0)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x14D0A260)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_52804E4B82A420D0_OFFSET UNITYSDK_OFFSET(0x14D08850)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_56AF4DA59134B843_OFFSET UNITYSDK_OFFSET(0x14D07F60)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_5ECCF619E430C1A4_OFFSET UNITYSDK_OFFSET(0x14D091F0)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_86143FF46EAE82B7_OFFSET UNITYSDK_OFFSET(0x14D09580)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_8D53E436DA31F831_OFFSET UNITYSDK_OFFSET(0x14D08200)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_96FD54C3BD12B0F7_OFFSET UNITYSDK_OFFSET(0x14D08B80)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_AA972BE565DAF9E3_OFFSET UNITYSDK_OFFSET(0x14D09C90)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_B61B4FE4562C7255_OFFSET UNITYSDK_OFFSET(0x14D08F20)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_D0ACB47B641DF879_OFFSET UNITYSDK_OFFSET(0x14D08430)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_E7955EC696E7ED3A_OFFSET UNITYSDK_OFFSET(0x14D0A370)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_F4B629D235B319E0_OFFSET UNITYSDK_OFFSET(0x14D09EE0)
#define CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48__CTOR_OFFSET UNITYSDK_OFFSET(0x14D0A2D0)

inline static constexpr unsigned int Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48_TypeDefinitionIndex = 53503;

class Class_1_B803CA670C4DC569_Class_1_AFCBB9F53F11AB48 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_1; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_2; // 0x20
	::RPG::GameCore::GameEntity* Field_1_3; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::RPG::GameCore::FixPoint Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x50
	::System::Boolean Field_1_9; // 0x51
	::System::Int32 Field_1_10; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_96FD54C3BD12B0F7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_96FD54C3BD12B0F7_OFFSET))(this, a1, a2, a3);
	}

	::Struct_2_E03B78B927A9E70C_5 Method_1_56AF4DA59134B843(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Struct_2_E03B78B927A9E70C_5(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_56AF4DA59134B843_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D53E436DA31F831(::RPG::GameCore::FixPoint& a1, ::RPG::GameCore::FixPoint& a2, ::RPG::GameCore::FixPoint& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_8D53E436DA31F831_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B61B4FE4562C7255(::System::Nullable_1<::RPG::GameCore::FixPoint> a1, ::System::Nullable_1<::RPG::GameCore::FixPoint> a2, ::System::Nullable_1<::RPG::GameCore::FixPoint> a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::System::Nullable_1<::RPG::GameCore::FixPoint>))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_B61B4FE4562C7255_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_5ECCF619E430C1A4(::RPG::GameCore::PropertyModifyFunction a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::PropertyModifyFunction a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_5ECCF619E430C1A4_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_52804E4B82A420D0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_52804E4B82A420D0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::System::Void Method_1_86143FF46EAE82B7(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_86143FF46EAE82B7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F4B629D235B319E0(::Il2CppArray<::System::String*>* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_F4B629D235B319E0_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_36633888A896DA63(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_36633888A896DA63_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_15D9626FE8E7452F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_15D9626FE8E7452F_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_AA972BE565DAF9E3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_AA972BE565DAF9E3_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_D0ACB47B641DF879()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_D0ACB47B641DF879_OFFSET))(this);
	}

	::System::Void Method_1_E7955EC696E7ED3A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B803CA670C4DC569_CLASS_1_AFCBB9F53F11AB48_METHOD_1_E7955EC696E7ED3A_OFFSET))(this, a1);
	}
};
