#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPGTools::LDWhiteBox { class WhiteBoxConnector; }
namespace RPGTools::LDWhiteBox { class WhiteBoxPath; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRegion; }
namespace RPGTools::LDWhiteBox { class WhiteBoxRouteNode; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_81AB0DAB3757D0A6_ADD_CHANGED_OFFSET UNITYSDK_OFFSET(0x164ADCA0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_02CA8785220462C6_OFFSET UNITYSDK_OFFSET(0x164AF4B0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_07A640FA3CABD3A7_OFFSET UNITYSDK_OFFSET(0x164ADFE0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_1_OFFSET UNITYSDK_OFFSET(0x164AE230)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_2_OFFSET UNITYSDK_OFFSET(0x164AE2D0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_3_OFFSET UNITYSDK_OFFSET(0x164AE370)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_OFFSET UNITYSDK_OFFSET(0x164AE190)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_199A3770E3204FCD_OFFSET UNITYSDK_OFFSET(0x164ADEC0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_19C00860B161B553_OFFSET UNITYSDK_OFFSET(0x164AE960)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_1F5C8CCD36213485_OFFSET UNITYSDK_OFFSET(0x164AEB20)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_27862B8720508825_OFFSET UNITYSDK_OFFSET(0x164AF080)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_28ED72D7803477CA_OFFSET UNITYSDK_OFFSET(0x164AF2D0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_391CF272AE8CC98C_OFFSET UNITYSDK_OFFSET(0x164AE410)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_392EFB1C517D0F0C_OFFSET UNITYSDK_OFFSET(0x164AE8A0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_3B9F5EA828433E22_OFFSET UNITYSDK_OFFSET(0x164AEA60)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_48BD86FEB6078B19_OFFSET UNITYSDK_OFFSET(0x164AEC20)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_49B486C68B40417B_OFFSET UNITYSDK_OFFSET(0x164ADF80)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_507D63F1DAE224C7_OFFSET UNITYSDK_OFFSET(0x164AE510)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_51226D7FFEA44F24_OFFSET UNITYSDK_OFFSET(0x164ADE60)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_84B92802FDAFF6C8_OFFSET UNITYSDK_OFFSET(0x164AECD0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_9FECF4A55EC56CD9_OFFSET UNITYSDK_OFFSET(0x164AE7A0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_C4890C3661481A1D_OFFSET UNITYSDK_OFFSET(0x164AEEE0)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_D1C9D58D870BD2CF_OFFSET UNITYSDK_OFFSET(0x164ADF20)
#define CLASS_1_81AB0DAB3757D0A6_METHOD_1_E4865A0578743351_OFFSET UNITYSDK_OFFSET(0x164AE5D0)
#define CLASS_1_81AB0DAB3757D0A6_REMOVE_CHANGED_OFFSET UNITYSDK_OFFSET(0x164ADD80)
#define CLASS_1_81AB0DAB3757D0A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x164AF650)

inline static constexpr unsigned int Class_1_81AB0DAB3757D0A6_TypeDefinitionIndex = 48963;

class Class_1_81AB0DAB3757D0A6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>** StaticGet_CPFIGFNIGBD()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81AB0DAB3757D0A6_TypeDefinitionIndex)->GetStaticField(0x65BC0);
	}
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>** StaticGet_EGGKMANCCCF()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81AB0DAB3757D0A6_TypeDefinitionIndex)->GetStaticField(0x65BC8);
	}
	static ::System::Action** StaticGet_Changed()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81AB0DAB3757D0A6_TypeDefinitionIndex)->GetStaticField(0x65BD0);
	}
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>** StaticGet_HPELNGDMFON()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81AB0DAB3757D0A6_TypeDefinitionIndex)->GetStaticField(0x65BD8);
	}
	static ::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>** StaticGet_JCDLPKIGCKN()
	{
		return (::System::Collections::Generic::HashSet_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81AB0DAB3757D0A6_TypeDefinitionIndex)->GetStaticField(0x65BE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6__CCTOR_OFFSET))();
	}

	static ::System::Void add_Changed(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_ADD_CHANGED_OFFSET))(a1);
	}

	static ::System::Void remove_Changed(::System::Action* a1)
	{
		return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_REMOVE_CHANGED_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* Method_1_51226D7FFEA44F24()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_51226D7FFEA44F24_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>* Method_1_199A3770E3204FCD()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxConnector*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_199A3770E3204FCD_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>* Method_1_D1C9D58D870BD2CF()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRouteNode*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_D1C9D58D870BD2CF_OFFSET))();
	}

	static ::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>* Method_1_49B486C68B40417B()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxPath*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_49B486C68B40417B_OFFSET))();
	}

	static ::System::Boolean Method_1_07A640FA3CABD3A7()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_07A640FA3CABD3A7_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101_1()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_1_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101_2()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_2_OFFSET))();
	}

	static ::System::Int32 Method_1_09A39B89545FE101_3()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_09A39B89545FE101_3_OFFSET))();
	}

	static ::System::Void Method_1_391CF272AE8CC98C(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_391CF272AE8CC98C_OFFSET))(a1);
	}

	static ::System::Void Method_1_507D63F1DAE224C7(::RPGTools::LDWhiteBox::WhiteBoxRegion* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_507D63F1DAE224C7_OFFSET))(a1);
	}

	static ::System::Void Method_1_9FECF4A55EC56CD9(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_9FECF4A55EC56CD9_OFFSET))(a1);
	}

	static ::System::Void Method_1_392EFB1C517D0F0C(::RPGTools::LDWhiteBox::WhiteBoxConnector* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxConnector*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_392EFB1C517D0F0C_OFFSET))(a1);
	}

	static ::System::Void Method_1_19C00860B161B553(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_19C00860B161B553_OFFSET))(a1);
	}

	static ::System::Void Method_1_3B9F5EA828433E22(::RPGTools::LDWhiteBox::WhiteBoxRouteNode* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxRouteNode*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_3B9F5EA828433E22_OFFSET))(a1);
	}

	static ::System::Void Method_1_1F5C8CCD36213485(::RPGTools::LDWhiteBox::WhiteBoxPath* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxPath*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_1F5C8CCD36213485_OFFSET))(a1);
	}

	static ::System::Void Method_1_48BD86FEB6078B19(::RPGTools::LDWhiteBox::WhiteBoxPath* a1)
	{
		return ((::System::Void(*)(::RPGTools::LDWhiteBox::WhiteBoxPath*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_48BD86FEB6078B19_OFFSET))(a1);
	}

	static ::System::Void Method_1_84B92802FDAFF6C8()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_84B92802FDAFF6C8_OFFSET))();
	}

	static ::System::Void Method_1_E4865A0578743351()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_E4865A0578743351_OFFSET))();
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxConnector* Method_1_C4890C3661481A1D(::System::String* a1)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxConnector*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_C4890C3661481A1D_OFFSET))(a1);
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxRouteNode* Method_1_27862B8720508825(::System::String* a1, ::RPGTools::LDWhiteBox::WhiteBoxRegion* a2)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxRouteNode*(*)(::System::String*, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_27862B8720508825_OFFSET))(a1, a2);
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxPath* Method_1_28ED72D7803477CA(::System::String* a1, ::RPGTools::LDWhiteBox::WhiteBoxRegion* a2)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxPath*(*)(::System::String*, ::RPGTools::LDWhiteBox::WhiteBoxRegion*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_28ED72D7803477CA_OFFSET))(a1, a2);
	}

	static ::RPGTools::LDWhiteBox::WhiteBoxRegion* Method_1_02CA8785220462C6(::System::String* a1)
	{
		return ((::RPGTools::LDWhiteBox::WhiteBoxRegion*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_81AB0DAB3757D0A6_METHOD_1_02CA8785220462C6_OFFSET))(a1);
	}
};
