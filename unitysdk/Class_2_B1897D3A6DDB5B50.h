#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_7F6A638FBAAEC90B_1;
namespace RPG::Client { class ActivityRebateData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_B1897D3A6DDB5B50_GET_ACTIVITYREBATEDATADICT_OFFSET UNITYSDK_OFFSET(0xBD0FCD0)
#define CLASS_2_B1897D3A6DDB5B50_INIT_OFFSET UNITYSDK_OFFSET(0xBD0EDE0)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_3D486B6D8DB10B2D_OFFSET UNITYSDK_OFFSET(0xBD0F0B0)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xBD0F540)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_A7E8B52E9ABB8DB9_OFFSET UNITYSDK_OFFSET(0xBD0FB50)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_C4200490580F701F_OFFSET UNITYSDK_OFFSET(0xBD0F160)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_DC8592C913491D4B_OFFSET UNITYSDK_OFFSET(0xBD0FBD0)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_DFD3CFE5E0A32BF1_OFFSET UNITYSDK_OFFSET(0xBD0F640)
#define CLASS_2_B1897D3A6DDB5B50_METHOD_2_F7097473EC9DE578_OFFSET UNITYSDK_OFFSET(0xBD0FA40)
#define CLASS_2_B1897D3A6DDB5B50_SET_ACTIVITYREBATEDATADICT_OFFSET UNITYSDK_OFFSET(0xBD0FCE0)
#define CLASS_2_B1897D3A6DDB5B50__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xBD0F310)
#define CLASS_2_B1897D3A6DDB5B50__CTOR_OFFSET UNITYSDK_OFFSET(0xBD0FCF0)

inline static constexpr unsigned int Class_2_B1897D3A6DDB5B50_TypeDefinitionIndex = 61903;

class Class_2_B1897D3A6DDB5B50 : public ::RPG::Client::BaseModule
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>* _ActivityRebateDataDict_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50__CTOR_OFFSET))(this);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_INIT_OFFSET))(this);
	}

	::RPG::Client::ActivityRebateData* Method_2_3D486B6D8DB10B2D(::System::UInt32 a1)
	{
		return ((::RPG::Client::ActivityRebateData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_3D486B6D8DB10B2D_OFFSET))(this, a1);
	}

	::System::Void Method_2_C4200490580F701F(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_C4200490580F701F_OFFSET))(this, a1);
	}

	::System::Void _AddPacketHandlers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50__ADDPACKETHANDLERS_OFFSET))(this);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_DFD3CFE5E0A32BF1(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_DFD3CFE5E0A32BF1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A7E8B52E9ABB8DB9(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_A7E8B52E9ABB8DB9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7097473EC9DE578(::Class_1_7F6A638FBAAEC90B_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7F6A638FBAAEC90B_1*))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_F7097473EC9DE578_OFFSET))(this, a1);
	}

	::System::Void Method_2_DC8592C913491D4B(::System::UInt16 a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_METHOD_2_DC8592C913491D4B_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>* get_ActivityRebateDataDict()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_GET_ACTIVITYREBATEDATADICT_OFFSET))(this);
	}

	::System::Void set_ActivityRebateDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ActivityRebateData*>*))((::PBYTE)hIl2Cpp + CLASS_2_B1897D3A6DDB5B50_SET_ACTIVITYREBATEDATADICT_OFFSET))(this, a1);
	}
};
