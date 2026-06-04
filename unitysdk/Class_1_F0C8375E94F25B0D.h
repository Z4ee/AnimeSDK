#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_1DC52A0BEDF50632_3;
class Class_1_45BB92167AED63A0_32;
class Class_1_FBCD4FF549575A07_1;
class Class_4_073634B1680C69E7;
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0C8375E94F25B0D_GET_LEVELSTATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA614120)
#define CLASS_1_F0C8375E94F25B0D_GET_LEVELSTATE_OFFSET UNITYSDK_OFFSET(0xA614100)
#define CLASS_1_F0C8375E94F25B0D_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xA614140)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xA614820)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_2CB92D87A4C029F3_OFFSET UNITYSDK_OFFSET(0xA614890)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_31BD864252EA9AC8_OFFSET UNITYSDK_OFFSET(0xA6157F0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_52D621A798A0FA33_OFFSET UNITYSDK_OFFSET(0xA6145D0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_6AECDE8D55A52B83_OFFSET UNITYSDK_OFFSET(0xA6143B0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_828D4822055A11FC_OFFSET UNITYSDK_OFFSET(0xA614F90)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_A020818EECC229E7_OFFSET UNITYSDK_OFFSET(0xA615C50)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xA614510)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xA6144B0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_D7202A098831E082_OFFSET UNITYSDK_OFFSET(0xA614670)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_F36A564E798A007B_OFFSET UNITYSDK_OFFSET(0xA614160)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0xA614570)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_FE7FA5CBD7653F6E_OFFSET UNITYSDK_OFFSET(0xA614750)
#define CLASS_1_F0C8375E94F25B0D_SET_LEVELSTATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xA614130)
#define CLASS_1_F0C8375E94F25B0D_SET_LEVELSTATE_OFFSET UNITYSDK_OFFSET(0xA614110)
#define CLASS_1_F0C8375E94F25B0D_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xA614150)
#define CLASS_1_F0C8375E94F25B0D__CTOR_OFFSET UNITYSDK_OFFSET(0xA614660)

inline static constexpr unsigned int Class_1_F0C8375E94F25B0D_TypeDefinitionIndex = 72628;

class Class_1_F0C8375E94F25B0D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>* _Sections_k__BackingField; // 0x10
	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType _LevelState_k__BackingField; // 0x18
	::System::UInt64 _LevelStateStartTimestamp_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D__CTOR_OFFSET))(this);
	}

	::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType get_LevelState()
	{
		return ((::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_GET_LEVELSTATE_OFFSET))(this);
	}

	::System::Void set_LevelState(::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::CakeRaceCore::LevelStateType))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_SET_LEVELSTATE_OFFSET))(this, a1);
	}

	::System::UInt64 get_LevelStateStartTimestamp()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_GET_LEVELSTATESTARTTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_LevelStateStartTimestamp(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_SET_LEVELSTATESTARTTIMESTAMP_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>* get_Sections()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_GET_SECTIONS_OFFSET))(this);
	}

	::System::Void set_Sections(::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_1DC52A0BEDF50632_3*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_SET_SECTIONS_OFFSET))(this, a1);
	}

	::Class_1_1DC52A0BEDF50632_3* Method_1_F36A564E798A007B()
	{
		return ((::Class_1_1DC52A0BEDF50632_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_F36A564E798A007B_OFFSET))(this);
	}

	::System::Int32 Method_1_6AECDE8D55A52B83()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_6AECDE8D55A52B83_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_32*>* Method_1_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_32*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_F5D02CB63424FC5A_OFFSET))(this);
	}

	static ::Class_1_F0C8375E94F25B0D* Method_1_52D621A798A0FA33(::Class_4_073634B1680C69E7* a1)
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::Class_4_073634B1680C69E7*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_52D621A798A0FA33_OFFSET))(a1);
	}

	static ::Class_1_F0C8375E94F25B0D* Method_1_FE7FA5CBD7653F6E(::Class_1_FBCD4FF549575A07_1* a1)
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::Class_1_FBCD4FF549575A07_1*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_FE7FA5CBD7653F6E_OFFSET))(a1);
	}

	::System::Void Method_1_D7202A098831E082(::Class_4_073634B1680C69E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_073634B1680C69E7*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_D7202A098831E082_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_FBCD4FF549575A07_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_FBCD4FF549575A07_1*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2CB92D87A4C029F3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_2CB92D87A4C029F3_OFFSET))(this);
	}

	::System::UInt32 Method_1_828D4822055A11FC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_828D4822055A11FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>* Method_1_31BD864252EA9AC8()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_31BD864252EA9AC8_OFFSET))(this);
	}

	::System::Boolean Method_1_A020818EECC229E7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_A020818EECC229E7_OFFSET))(this, a1);
	}
};
