#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinPrepareFightTalker.h"
#include "unitysdk/System/Object.h"

class Class_1_6373A2231D9CD47A_1;
class Class_1_831CA0874735170E;
class Class_1_AE77A09A042BE68B;
class Class_1_EF41A94FBB43C5D7;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client::FateRin::HouguMap { class FateRinHouguMapFight; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D00D65DE285A8A8C_METHOD_1_04851F5779715FDC_OFFSET UNITYSDK_OFFSET(0x19904A60)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_299CE2C36DC7709B_OFFSET UNITYSDK_OFFSET(0x199049B0)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_2E1B82E48EE46E1B_OFFSET UNITYSDK_OFFSET(0x199050C0)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_59DE16F0A6458774_OFFSET UNITYSDK_OFFSET(0x199057B0)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_63E8D792F4472B08_OFFSET UNITYSDK_OFFSET(0x199045B0)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_757473040C3B582D_OFFSET UNITYSDK_OFFSET(0x19906060)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_7DD77ED1A82B5E35_OFFSET UNITYSDK_OFFSET(0x19904D00)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_A917AC671DF6CB2D_OFFSET UNITYSDK_OFFSET(0x19905CC0)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_AD2E99880A0E2029_OFFSET UNITYSDK_OFFSET(0x199048B0)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_BB31B9484812FA4A_OFFSET UNITYSDK_OFFSET(0x19905330)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_F269FC81E397AFB5_OFFSET UNITYSDK_OFFSET(0x19904D40)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_FD0971FE01734D5D_OFFSET UNITYSDK_OFFSET(0x19904750)
#define CLASS_1_D00D65DE285A8A8C_METHOD_1_FF62E8234E8FED2D_OFFSET UNITYSDK_OFFSET(0x19905D80)
#define CLASS_1_D00D65DE285A8A8C__CTOR_OFFSET UNITYSDK_OFFSET(0x19904070)

inline static constexpr unsigned int Class_1_D00D65DE285A8A8C_TypeDefinitionIndex = 79434;

class Class_1_D00D65DE285A8A8C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* DLFPKICOJDB; // 0x10
	::System::Collections::Generic::List_1<::Class_1_EF41A94FBB43C5D7*>* EPMPOANJMKB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C__CTOR_OFFSET))(this);
	}

	::Class_1_EF41A94FBB43C5D7* Method_1_AD2E99880A0E2029(::System::UInt32 a1)
	{
		return ((::Class_1_EF41A94FBB43C5D7*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_AD2E99880A0E2029_OFFSET))(this, a1);
	}

	::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* Method_1_299CE2C36DC7709B(::System::UInt32 a1)
	{
		return ((::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_299CE2C36DC7709B_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>* Method_1_04851F5779715FDC(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_04851F5779715FDC_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_EF41A94FBB43C5D7*>* Method_1_7DD77ED1A82B5E35()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_EF41A94FBB43C5D7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_7DD77ED1A82B5E35_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_F269FC81E397AFB5()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_F269FC81E397AFB5_OFFSET))(this);
	}

	::System::Void Method_1_2E1B82E48EE46E1B(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_2E1B82E48EE46E1B_OFFSET))(this, a1);
	}

	::System::Void Method_1_BB31B9484812FA4A(::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_BB31B9484812FA4A_OFFSET))(this, a1);
	}

	static ::Class_1_EF41A94FBB43C5D7* Method_1_63E8D792F4472B08(::System::UInt32 a1)
	{
		return ((::Class_1_EF41A94FBB43C5D7*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_63E8D792F4472B08_OFFSET))(a1);
	}

	static ::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight* Method_1_FD0971FE01734D5D(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::Client::FateRin::HouguMap::FateRinHouguMapFight*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_FD0971FE01734D5D_OFFSET))(a1, a2);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_59DE16F0A6458774(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_59DE16F0A6458774_OFFSET))(a1);
	}

	static ::Class_1_831CA0874735170E* Method_1_A917AC671DF6CB2D(::System::UInt32 a1)
	{
		return ((::Class_1_831CA0874735170E*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_A917AC671DF6CB2D_OFFSET))(a1);
	}

	static ::Class_1_AE77A09A042BE68B* Method_1_FF62E8234E8FED2D(::Class_1_6373A2231D9CD47A_1* a1)
	{
		return ((::Class_1_AE77A09A042BE68B*(*)(::Class_1_6373A2231D9CD47A_1*))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_FF62E8234E8FED2D_OFFSET))(a1);
	}

	static ::RPG::GameCore::FateRinPrepareFightTalker Method_1_757473040C3B582D(::RPG::GameCore::FateRinPrepareFightTalker a1)
	{
		return ((::RPG::GameCore::FateRinPrepareFightTalker(*)(::RPG::GameCore::FateRinPrepareFightTalker))((::PBYTE)hIl2Cpp + CLASS_1_D00D65DE285A8A8C_METHOD_1_757473040C3B582D_OFFSET))(a1);
	}
};
