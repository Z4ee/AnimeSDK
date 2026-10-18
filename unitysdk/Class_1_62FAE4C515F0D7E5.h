#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleTeamEditState.h"
#include "unitysdk/Struct_2_884CDB9D0FDFAF0D_8.h"
#include "unitysdk/Struct_2_AEFC71A69A95B2E3.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_785;
class Class_1_32ED9F60AC82E5A0_2;
class Class_1_45BB92167AED63A0_10;
class Class_1_A0F414D2CF643E56_4;
class Class_1_D17272E82AE804C2_395;
class Class_1_D40936EF3BF54118_35;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class PetMarbleGameConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_62FAE4C515F0D7E5_ADD_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB0630)
#define CLASS_1_62FAE4C515F0D7E5_ADD_SELFMARBLESELECTEDREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB05B0)
#define CLASS_1_62FAE4C515F0D7E5_ADD_SELFREADYREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB0550)
#define CLASS_1_62FAE4C515F0D7E5_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEBB2D30)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_00316090EE715F6A_1_OFFSET UNITYSDK_OFFSET(0xEBB1BA0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_00316090EE715F6A_OFFSET UNITYSDK_OFFSET(0xEBB19D0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0xEBB0E80)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_0E9E253EC7D87349_OFFSET UNITYSDK_OFFSET(0xEBB0ED0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_1C84F0D45ADCB6E9_OFFSET UNITYSDK_OFFSET(0xEBB1790)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xEBB07F0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_269AC17BE7A40357_OFFSET UNITYSDK_OFFSET(0xEBB1C40)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_283228DCA08F69C7_OFFSET UNITYSDK_OFFSET(0xEBB0740)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_2AA6BCD3A3703891_OFFSET UNITYSDK_OFFSET(0xEBB2380)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_2ACBFAA62CA24333_OFFSET UNITYSDK_OFFSET(0xEBB0690)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0xEBB1910)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xEBB0D40)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_42DA464B19969A86_OFFSET UNITYSDK_OFFSET(0xEBB1FB0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_473CE12042CED75B_OFFSET UNITYSDK_OFFSET(0xEBB2210)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_5A176448DB820A05_OFFSET UNITYSDK_OFFSET(0xEBB0850)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_5FF444752D64BB5D_OFFSET UNITYSDK_OFFSET(0xEBB2880)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_624AA9B0E5FC6B06_OFFSET UNITYSDK_OFFSET(0xEBB0910)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_626D6A7F193CD397_1_OFFSET UNITYSDK_OFFSET(0xEBB0E00)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_626D6A7F193CD397_OFFSET UNITYSDK_OFFSET(0xEBB0D80)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0xEBB1CA0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_7A2D01952FB038C2_OFFSET UNITYSDK_OFFSET(0xEBB1A70)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_8CFC2C6497650D6F_OFFSET UNITYSDK_OFFSET(0xEBB0CF0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xEBB09D0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_9EA793DE44B6DE2F_OFFSET UNITYSDK_OFFSET(0xEBB2B90)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_9F86FD0988591376_OFFSET UNITYSDK_OFFSET(0xEBB0B20)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_B445571F09130B5E_OFFSET UNITYSDK_OFFSET(0xEBB2AA0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_DA4377709D1B2DE3_OFFSET UNITYSDK_OFFSET(0xEBB1530)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_DB2B44FABAA6A6B5_OFFSET UNITYSDK_OFFSET(0xEBB0C60)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_F4ABEEAC4B59110F_OFFSET UNITYSDK_OFFSET(0xEBB0AE0)
#define CLASS_1_62FAE4C515F0D7E5_METHOD_1_F8EBBB08927B635C_OFFSET UNITYSDK_OFFSET(0xEBB0F40)
#define CLASS_1_62FAE4C515F0D7E5_REMOVE_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB2F30)
#define CLASS_1_62FAE4C515F0D7E5_REMOVE_SELFMARBLESELECTEDREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB2EB0)
#define CLASS_1_62FAE4C515F0D7E5_REMOVE_SELFREADYREQUESTED_OFFSET UNITYSDK_OFFSET(0xEBB2E50)
#define CLASS_1_62FAE4C515F0D7E5__CTOR_OFFSET UNITYSDK_OFFSET(0xEBAFC90)

inline static constexpr unsigned int Class_1_62FAE4C515F0D7E5_TypeDefinitionIndex = 74726;

class Class_1_62FAE4C515F0D7E5 : public ::System::Object
{
public:
	::Struct_2_AEFC71A69A95B2E3 LIOMDOHHNFH; // 0x10
	::System::Action_2<::System::UInt32, ::System::UInt32>* SelectedMarbleAppearanceRequested; // 0x20
	::System::Action_1<::Struct_2_AEFC71A69A95B2E3>* BLNMMCJECEL; // 0x28
	::System::Func_1<::System::Boolean>* AFIBMAJKJDP; // 0x30
	::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>* SelfMarbleSelectedRequested; // 0x38
	::System::Collections::Generic::List_1<::Struct_2_884CDB9D0FDFAF0D_8>* LENPPEDOIBG; // 0x40
	::System::Action_1<::System::Boolean>* SelfReadyRequested; // 0x48
	::System::Collections::Generic::List_1<::Class_1_45BB92167AED63A0_10*>* JGBIIJMHNLC; // 0x50
	::Struct_2_AEFC71A69A95B2E3 FABDNOAPLGL; // 0x58
	::System::Collections::Generic::List_1<::Class_1_A0F414D2CF643E56_4*>* CMIAPIMBCJI; // 0x68
	::Class_0_16E4307DCC419505_785* OFMKMFOJKFC; // 0x70
	::System::Action_1<::Struct_2_AEFC71A69A95B2E3>* NOKLEJHAHPG; // 0x78
	::System::Action* DGGJICFFMNL; // 0x80
	::System::UInt32 EICIJEBDFBF; // 0x88
	::System::UInt32 IKKHNIPGMGK; // 0x8C
	::System::Single LHLIOJPGPEP; // 0x90
	::RPG::Client::PetMarble::PetMarbleTeamEditState DLNIGFGLPLJ; // 0x94
	::System::Boolean GPLMNNALIAI; // 0x98
	::System::Boolean DLNHKFDKFEJ; // 0x99
	::System::Boolean OAMIIFMFEIE; // 0x9A
	::System::Boolean GFAMGLFOMGI; // 0x9B
	::System::Boolean ABHPFJBPAHO; // 0x9C
	::System::Single GEONFMBMLEL; // 0xA0
	::System::Int32 OLJBMOGBPKL; // 0xA4

	::System::Void _ctor(::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_10*>* a1, ::Class_0_16E4307DCC419505_785* a2, ::RPG::GameCore::PetMarbleGameConfig* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::Func_1<::System::Boolean>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_45BB92167AED63A0_10*>*, ::Class_0_16E4307DCC419505_785*, ::RPG::GameCore::PetMarbleGameConfig*, ::System::UInt32, ::System::UInt32, ::System::Func_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::UInt32 Method_1_2ACBFAA62CA24333(::System::UInt32 a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_2ACBFAA62CA24333_OFFSET))(this, a1);
	}

	::System::Void Method_1_283228DCA08F69C7(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_283228DCA08F69C7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5A176448DB820A05(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_5A176448DB820A05_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_624AA9B0E5FC6B06(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_624AA9B0E5FC6B06_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_9681042564541CD6_OFFSET))(this);
	}

	::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_10*>* Method_1_F4ABEEAC4B59110F()
	{
		return ((::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_10*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_F4ABEEAC4B59110F_OFFSET))(this);
	}

	::System::Single Method_1_9F86FD0988591376()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_9F86FD0988591376_OFFSET))(this);
	}

	::RPG::Client::PetMarble::PetMarbleTeamEditState Method_1_8CFC2C6497650D6F()
	{
		return ((::RPG::Client::PetMarble::PetMarbleTeamEditState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_8CFC2C6497650D6F_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_626D6A7F193CD397(::System::Action_1<::Struct_2_AEFC71A69A95B2E3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_AEFC71A69A95B2E3>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_626D6A7F193CD397_OFFSET))(this, a1);
	}

	::System::Void Method_1_626D6A7F193CD397_1(::System::Action_1<::Struct_2_AEFC71A69A95B2E3>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::Struct_2_AEFC71A69A95B2E3>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_626D6A7F193CD397_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_1_0E9E253EC7D87349(::Class_1_D40936EF3BF54118_35* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D40936EF3BF54118_35*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_0E9E253EC7D87349_OFFSET))(this, a1);
	}

	::System::Void Method_1_DA4377709D1B2DE3(::Class_1_32ED9F60AC82E5A0_2* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_32ED9F60AC82E5A0_2*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_DA4377709D1B2DE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_00316090EE715F6A(::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_00316090EE715F6A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_00316090EE715F6A_1(::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_00316090EE715F6A_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C84F0D45ADCB6E9(::RPG::Client::PetMarble::PetMarbleTeamEditState a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PetMarble::PetMarbleTeamEditState, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_1C84F0D45ADCB6E9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_269AC17BE7A40357(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_269AC17BE7A40357_OFFSET))(this, a1);
	}

	::System::Void Method_1_42DA464B19969A86(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_42DA464B19969A86_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_473CE12042CED75B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_473CE12042CED75B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_749948B663FCCCEF_OFFSET))(this);
	}

	::System::Void Method_1_F8EBBB08927B635C(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56_4*>* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_A0F414D2CF643E56_4*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_F8EBBB08927B635C_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_5FF444752D64BB5D(::Class_1_A0F414D2CF643E56_4* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_A0F414D2CF643E56_4*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_5FF444752D64BB5D_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_1_9EA793DE44B6DE2F(::Class_1_A0F414D2CF643E56_4* a1, ::Class_1_A0F414D2CF643E56_4* a2)
	{
		return ((::System::Boolean(*)(::Class_1_A0F414D2CF643E56_4*, ::Class_1_A0F414D2CF643E56_4*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_9EA793DE44B6DE2F_OFFSET))(a1, a2);
	}

	::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>* Method_1_B445571F09130B5E()
	{
		return ((::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_B445571F09130B5E_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::Struct_2_884CDB9D0FDFAF0D_8>* Method_1_2AA6BCD3A3703891(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_395*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_884CDB9D0FDFAF0D_8>*(*)(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_D17272E82AE804C2_395*>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_2AA6BCD3A3703891_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_DISPOSE_OFFSET))(this);
	}

	::System::Void add_SelfReadyRequested(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_ADD_SELFREADYREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_SelfReadyRequested(::System::Action_1<::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_REMOVE_SELFREADYREQUESTED_OFFSET))(this, a1);
	}

	::System::Void add_SelfMarbleSelectedRequested(::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_ADD_SELFMARBLESELECTEDREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_SelfMarbleSelectedRequested(::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::UInt32, ::System::Boolean, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_REMOVE_SELFMARBLESELECTEDREQUESTED_OFFSET))(this, a1);
	}

	::System::Void add_SelectedMarbleAppearanceRequested(::System::Action_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_ADD_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET))(this, a1);
	}

	::System::Void remove_SelectedMarbleAppearanceRequested(::System::Action_2<::System::UInt32, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_REMOVE_SELECTEDMARBLEAPPEARANCEREQUESTED_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	static ::Struct_2_AEFC71A69A95B2E3 Method_1_7A2D01952FB038C2(::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_AEFC71A69A95B2E3(*)(::System::Collections::Generic::IList_1<::Struct_2_884CDB9D0FDFAF0D_8>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_7A2D01952FB038C2_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_DB2B44FABAA6A6B5()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CLASS_1_62FAE4C515F0D7E5_METHOD_1_DB2B44FABAA6A6B5_OFFSET))();
	}
};
