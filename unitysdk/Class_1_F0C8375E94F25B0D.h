#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/CakeRaceCore/LevelStateType.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_38;
class Class_1_EB4EA813E55E9D5A;
class Class_1_FFE5B8A52EC38E9C_5;
class Class_4_073634B1680C69E7;
namespace RPG::Client { class CakeRaceEffectDataItem; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F0C8375E94F25B0D_GET_LEVELSTATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB7DF6E0)
#define CLASS_1_F0C8375E94F25B0D_GET_LEVELSTATE_OFFSET UNITYSDK_OFFSET(0xB7DF6C0)
#define CLASS_1_F0C8375E94F25B0D_GET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB7DF700)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_097468641FDED14E_OFFSET UNITYSDK_OFFSET(0xB7DFF60)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_224BEB9738AD25D4_OFFSET UNITYSDK_OFFSET(0xB7DF720)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_2CB92D87A4C029F3_OFFSET UNITYSDK_OFFSET(0xB7DFFD0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_52D621A798A0FA33_OFFSET UNITYSDK_OFFSET(0xB7DFD10)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_828D4822055A11FC_OFFSET UNITYSDK_OFFSET(0xB7E09A0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_83C0FAC2ECCA945D_OFFSET UNITYSDK_OFFSET(0xB7E14E0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_1_OFFSET UNITYSDK_OFFSET(0xB7DFC50)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0xB7DFBF0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_CFAE4A19CDCB7CB0_OFFSET UNITYSDK_OFFSET(0xB7DFA90)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_D7202A098831E082_OFFSET UNITYSDK_OFFSET(0xB7DFDB0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_F5D02CB63424FC5A_OFFSET UNITYSDK_OFFSET(0xB7DFCB0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_F9A6162DF6A97784_OFFSET UNITYSDK_OFFSET(0xB7E1AF0)
#define CLASS_1_F0C8375E94F25B0D_METHOD_1_FE7FA5CBD7653F6E_OFFSET UNITYSDK_OFFSET(0xB7DFE90)
#define CLASS_1_F0C8375E94F25B0D_SET_LEVELSTATESTARTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xB7DF6F0)
#define CLASS_1_F0C8375E94F25B0D_SET_LEVELSTATE_OFFSET UNITYSDK_OFFSET(0xB7DF6D0)
#define CLASS_1_F0C8375E94F25B0D_SET_SECTIONS_OFFSET UNITYSDK_OFFSET(0xB7DF710)
#define CLASS_1_F0C8375E94F25B0D__CTOR_OFFSET UNITYSDK_OFFSET(0xB7DFDA0)

inline static constexpr unsigned int Class_1_F0C8375E94F25B0D_TypeDefinitionIndex = 78108;

class Class_1_F0C8375E94F25B0D : public ::System::Object
{
public:
	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_5*>* _Sections_k__BackingField; // 0x10
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

	::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_5*>* get_Sections()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_5*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_GET_SECTIONS_OFFSET))(this);
	}

	::System::Void set_Sections(::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_5*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_FFE5B8A52EC38E9C_5*>*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_SET_SECTIONS_OFFSET))(this, a1);
	}

	::Class_1_FFE5B8A52EC38E9C_5* Method_1_224BEB9738AD25D4()
	{
		return ((::Class_1_FFE5B8A52EC38E9C_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_224BEB9738AD25D4_OFFSET))(this);
	}

	::System::Int32 Method_1_CFAE4A19CDCB7CB0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_CFAE4A19CDCB7CB0_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::UInt32 Method_1_AA2D3E889C8A52CA_1()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_AA2D3E889C8A52CA_1_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_38*>* Method_1_F5D02CB63424FC5A()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_38*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_F5D02CB63424FC5A_OFFSET))(this);
	}

	static ::Class_1_F0C8375E94F25B0D* Method_1_52D621A798A0FA33(::Class_4_073634B1680C69E7* a1)
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::Class_4_073634B1680C69E7*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_52D621A798A0FA33_OFFSET))(a1);
	}

	static ::Class_1_F0C8375E94F25B0D* Method_1_FE7FA5CBD7653F6E(::Class_1_EB4EA813E55E9D5A* a1)
	{
		return ((::Class_1_F0C8375E94F25B0D*(*)(::Class_1_EB4EA813E55E9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_FE7FA5CBD7653F6E_OFFSET))(a1);
	}

	::System::Void Method_1_D7202A098831E082(::Class_4_073634B1680C69E7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_073634B1680C69E7*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_D7202A098831E082_OFFSET))(this, a1);
	}

	::System::Void Method_1_097468641FDED14E(::Class_1_EB4EA813E55E9D5A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EB4EA813E55E9D5A*))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_097468641FDED14E_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_2CB92D87A4C029F3()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_2CB92D87A4C029F3_OFFSET))(this);
	}

	::System::UInt32 Method_1_828D4822055A11FC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_828D4822055A11FC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>* Method_1_83C0FAC2ECCA945D()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::CakeRaceEffectDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_83C0FAC2ECCA945D_OFFSET))(this);
	}

	::System::Boolean Method_1_F9A6162DF6A97784(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F0C8375E94F25B0D_METHOD_1_F9A6162DF6A97784_OFFSET))(this, a1);
	}
};
