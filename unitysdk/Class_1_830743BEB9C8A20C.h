#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4702FDEBC696B148;
class Class_1_49FC9E80671BDBC7;
class Class_1_F3CA30716D4FAF92_8;
class Class_2_F3C45F1FC7349B6E;
namespace RPG::GameCore { class CakeRaceFieldScoreRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_830743BEB9C8A20C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A593FD0)
#define CLASS_1_830743BEB9C8A20C_GET_GAMEENDDATADIC_OFFSET UNITYSDK_OFFSET(0x1A595210)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_040FA6C60B6596F0_OFFSET UNITYSDK_OFFSET(0x1A594880)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x1A589930)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_67C10584F4320583_OFFSET UNITYSDK_OFFSET(0x1A594820)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_726DF786F5A9C19F_OFFSET UNITYSDK_OFFSET(0x1A5951B0)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_86DDAE90EF52A1F0_1_OFFSET UNITYSDK_OFFSET(0x1A594E90)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_86DDAE90EF52A1F0_OFFSET UNITYSDK_OFFSET(0x1A594D30)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_8B5E3014AFF7F8EA_OFFSET UNITYSDK_OFFSET(0x1A594020)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_AB11A8D4CB86DC97_OFFSET UNITYSDK_OFFSET(0x1A5945F0)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_B8C913887A0607F5_OFFSET UNITYSDK_OFFSET(0x1A594FF0)
#define CLASS_1_830743BEB9C8A20C_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0x1A5899A0)
#define CLASS_1_830743BEB9C8A20C_SET_GAMEENDDATADIC_OFFSET UNITYSDK_OFFSET(0x1A595220)
#define CLASS_1_830743BEB9C8A20C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A593F30)

inline static constexpr unsigned int Class_1_830743BEB9C8A20C_TypeDefinitionIndex = 36639;

class Class_1_830743BEB9C8A20C : public ::System::Object
{
public:
	::Class_2_F3C45F1FC7349B6E* PDENFEFCAGN; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>* _GameEndDataDic_k__BackingField; // 0x18

	::System::Void _ctor(::Class_2_F3C45F1FC7349B6E* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F3C45F1FC7349B6E*))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::Class_1_F3CA30716D4FAF92_8* Method_1_AB11A8D4CB86DC97(::System::UInt32 a1)
	{
		return ((::Class_1_F3CA30716D4FAF92_8*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_AB11A8D4CB86DC97_OFFSET))(this, a1);
	}

	::System::Void Method_1_8B5E3014AFF7F8EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_8B5E3014AFF7F8EA_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* Method_1_040FA6C60B6596F0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_040FA6C60B6596F0_OFFSET))(this);
	}

	static ::System::UInt32 Method_1_86DDAE90EF52A1F0(::System::Int32 a1, ::RPG::GameCore::CakeRaceFieldScoreRow* a2)
	{
		return ((::System::UInt32(*)(::System::Int32, ::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_86DDAE90EF52A1F0_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_86DDAE90EF52A1F0_1(::System::Int32 a1, ::RPG::GameCore::CakeRaceFieldScoreRow* a2)
	{
		return ((::System::UInt32(*)(::System::Int32, ::RPG::GameCore::CakeRaceFieldScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_86DDAE90EF52A1F0_1_OFFSET))(a1, a2);
	}

	::System::UInt32 Method_1_B8C913887A0607F5(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_B8C913887A0607F5_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_4702FDEBC696B148* Method_1_67C10584F4320583()
	{
		return ((::Class_1_4702FDEBC696B148*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_67C10584F4320583_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>* Method_1_726DF786F5A9C19F()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_4702FDEBC696B148*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_METHOD_1_726DF786F5A9C19F_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>* get_GameEndDataDic()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_GET_GAMEENDDATADIC_OFFSET))(this);
	}

	::System::Void set_GameEndDataDic(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_49FC9E80671BDBC7*>*))((::PBYTE)hIl2Cpp + CLASS_1_830743BEB9C8A20C_SET_GAMEENDDATADIC_OFFSET))(this, a1);
	}
};
