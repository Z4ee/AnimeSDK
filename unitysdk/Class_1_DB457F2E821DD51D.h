#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateFsmType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_534;
class Class_0_16E4307DCC419505_535;
class Class_1_93271BB4736EAF8B;
class Class_1_CB986F8DD1655D73;
class Class_2_2461A19B320A03F9;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DB457F2E821DD51D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17568D50)
#define CLASS_1_DB457F2E821DD51D_GET_ANIMTRACK_OFFSET UNITYSDK_OFFSET(0x17569BF0)
#define CLASS_1_DB457F2E821DD51D_GET_CURRENTSTATEELAPSED_OFFSET UNITYSDK_OFFSET(0x17569BD0)
#define CLASS_1_DB457F2E821DD51D_GET_MUTATOR_OFFSET UNITYSDK_OFFSET(0x17569BA0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x175689D0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_14BCE61A1C4266BF_OFFSET UNITYSDK_OFFSET(0x17569710)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x175699E0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_43A46E5F9FAC62B8_OFFSET UNITYSDK_OFFSET(0x17569BC0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_488652666D9210DE_OFFSET UNITYSDK_OFFSET(0x17568970)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x17569A40)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_5B51F24F916F8986_OFFSET UNITYSDK_OFFSET(0x175698C0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_63B5C9C17BB8771E_OFFSET UNITYSDK_OFFSET(0x17569490)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_6F2150E2460D615D_OFFSET UNITYSDK_OFFSET(0x17569C30)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_726F1021821BAC7F_OFFSET UNITYSDK_OFFSET(0x17569CA0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_75B6172800DB1938_OFFSET UNITYSDK_OFFSET(0x17569D70)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_DEA464A9249BABA0_OFFSET UNITYSDK_OFFSET(0x175690D0)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_ED83B31D420699BC_OFFSET UNITYSDK_OFFSET(0x17569C10)
#define CLASS_1_DB457F2E821DD51D_METHOD_1_F00C9C530ADB1CA9_OFFSET UNITYSDK_OFFSET(0x17569830)
#define CLASS_1_DB457F2E821DD51D_SET_ANIMTRACK_OFFSET UNITYSDK_OFFSET(0x17569C00)
#define CLASS_1_DB457F2E821DD51D_SET_CURRENTSTATEELAPSED_OFFSET UNITYSDK_OFFSET(0x17569BE0)
#define CLASS_1_DB457F2E821DD51D_SET_MUTATOR_OFFSET UNITYSDK_OFFSET(0x17569BB0)
#define CLASS_1_DB457F2E821DD51D__CTOR_OFFSET UNITYSDK_OFFSET(0x17568850)

inline static constexpr unsigned int Class_1_DB457F2E821DD51D_TypeDefinitionIndex = 53415;

class Class_1_DB457F2E821DD51D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Field_1_1; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AnimStateLogicType, ::Class_0_16E4307DCC419505_534*>* Field_1_2; // 0x20
	::Class_2_2461A19B320A03F9* Field_1_3; // 0x28
	::Class_0_16E4307DCC419505_535* _Mutator_k__BackingField; // 0x30
	::Class_0_16E4307DCC419505_534* Field_1_5; // 0x38
	::Class_1_93271BB4736EAF8B* _AnimTrack_k__BackingField; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::System::Single _CurrentStateElapsed_k__BackingField; // 0x4C

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::Class_2_2461A19B320A03F9* a2, ::Class_0_16E4307DCC419505_535* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_2_2461A19B320A03F9*, ::Class_0_16E4307DCC419505_535*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_488652666D9210DE(::RPG::GameCore::AnimStateFsmType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateFsmType))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_488652666D9210DE_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_DEA464A9249BABA0(::RPG::GameCore::AnimStateLogicType a1, ::Class_1_CB986F8DD1655D73* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType, ::Class_1_CB986F8DD1655D73*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_DEA464A9249BABA0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_63B5C9C17BB8771E(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_63B5C9C17BB8771E_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::AnimStateLogicType Method_1_14BCE61A1C4266BF()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_14BCE61A1C4266BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F00C9C530ADB1CA9(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_F00C9C530ADB1CA9_OFFSET))(this, a1);
	}

	::System::Object* Method_1_5B51F24F916F8986(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_5B51F24F916F8986_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_52CA0F45BC3414DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_52CA0F45BC3414DC_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_535* get_Mutator()
	{
		return ((::Class_0_16E4307DCC419505_535*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_GET_MUTATOR_OFFSET))(this);
	}

	::System::Void set_Mutator(::Class_0_16E4307DCC419505_535* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_535*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_SET_MUTATOR_OFFSET))(this, a1);
	}

	::Class_2_2461A19B320A03F9* Method_1_43A46E5F9FAC62B8()
	{
		return ((::Class_2_2461A19B320A03F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_43A46E5F9FAC62B8_OFFSET))(this);
	}

	::System::Single get_CurrentStateElapsed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_GET_CURRENTSTATEELAPSED_OFFSET))(this);
	}

	::System::Void set_CurrentStateElapsed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_SET_CURRENTSTATEELAPSED_OFFSET))(this, a1);
	}

	::Class_1_93271BB4736EAF8B* get_AnimTrack()
	{
		return ((::Class_1_93271BB4736EAF8B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_GET_ANIMTRACK_OFFSET))(this);
	}

	::System::Void set_AnimTrack(::Class_1_93271BB4736EAF8B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_93271BB4736EAF8B*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_SET_ANIMTRACK_OFFSET))(this, a1);
	}

	::RPG::Client::MockAnimator* Method_1_ED83B31D420699BC()
	{
		return ((::RPG::Client::MockAnimator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_ED83B31D420699BC_OFFSET))(this);
	}

	::System::Void Method_1_6F2150E2460D615D(::RPG::Client::MockAnimator* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_6F2150E2460D615D_OFFSET))(this, a1);
	}

	::System::Void Method_1_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_1_726F1021821BAC7F(::RPG::GameCore::AnimStateLogicType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_726F1021821BAC7F_OFFSET))(this, a1);
	}

	::RPG::GameCore::AnimStateLogicType Method_1_75B6172800DB1938()
	{
		return ((::RPG::GameCore::AnimStateLogicType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB457F2E821DD51D_METHOD_1_75B6172800DB1938_OFFSET))(this);
	}
};
