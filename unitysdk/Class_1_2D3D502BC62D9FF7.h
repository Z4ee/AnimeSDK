#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class PlayerReturnTrialAvatarGroup; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2D3D502BC62D9FF7_GET_ISASSISTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11A032D0)
#define CLASS_1_2D3D502BC62D9FF7_GET_USINGASSISTGROUPID_OFFSET UNITYSDK_OFFSET(0x11A032B0)
#define CLASS_1_2D3D502BC62D9FF7_GET_USINGRETURNID_OFFSET UNITYSDK_OFFSET(0x11A03290)
#define CLASS_1_2D3D502BC62D9FF7_GET_USINGTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0x11A032F0)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_123DFB09BD2C9B9E_OFFSET UNITYSDK_OFFSET(0x11A03080)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0x11A030E0)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_71456C0B214E6DAC_OFFSET UNITYSDK_OFFSET(0x11A02B80)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_7A6A415A1B982EB3_OFFSET UNITYSDK_OFFSET(0x11A028A0)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x11A031A0)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_C4685BA3513103D8_OFFSET UNITYSDK_OFFSET(0x11A02980)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_C94BFB8159DBE554_OFFSET UNITYSDK_OFFSET(0x11A02B20)
#define CLASS_1_2D3D502BC62D9FF7_METHOD_1_E0474ABD724209BE_OFFSET UNITYSDK_OFFSET(0x11A02E70)
#define CLASS_1_2D3D502BC62D9FF7_SET_ISASSISTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x11A032E0)
#define CLASS_1_2D3D502BC62D9FF7_SET_USINGASSISTGROUPID_OFFSET UNITYSDK_OFFSET(0x11A032C0)
#define CLASS_1_2D3D502BC62D9FF7_SET_USINGRETURNID_OFFSET UNITYSDK_OFFSET(0x11A032A0)
#define CLASS_1_2D3D502BC62D9FF7_SET_USINGTRIALAVATARGROUP_OFFSET UNITYSDK_OFFSET(0x11A03300)
#define CLASS_1_2D3D502BC62D9FF7__CTOR_OFFSET UNITYSDK_OFFSET(0x11A027E0)

inline static constexpr unsigned int Class_1_2D3D502BC62D9FF7_TypeDefinitionIndex = 57089;

class Class_1_2D3D502BC62D9FF7 : public ::System::Object
{
public:
	::RPG::Client::PlayerReturnTrialAvatarGroup* _UsingTrialAvatarGroup_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::PlayerReturnTrialAvatarGroup*>* Field_1_4; // 0x20
	::System::UInt32 _UsingReturnID_k__BackingField; // 0x28
	::System::UInt32 _UsingAssistGroupID_k__BackingField; // 0x2C
	::System::Boolean _IsAssistAvailable_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7__CTOR_OFFSET))(this);
	}

	::RPG::Client::PlayerReturnTrialAvatarGroup* Method_1_7A6A415A1B982EB3(::System::UInt32 a1)
	{
		return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_7A6A415A1B982EB3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* Method_1_C4685BA3513103D8()
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_C4685BA3513103D8_OFFSET))(this);
	}

	::System::Boolean Method_1_C94BFB8159DBE554(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_C94BFB8159DBE554_OFFSET))(this, a1);
	}

	::System::Void Method_1_71456C0B214E6DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_71456C0B214E6DAC_OFFSET))(this);
	}

	::System::Void Method_1_E0474ABD724209BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_E0474ABD724209BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_123DFB09BD2C9B9E(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_123DFB09BD2C9B9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::System::UInt32 get_UsingReturnID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_GET_USINGRETURNID_OFFSET))(this);
	}

	::System::Void set_UsingReturnID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_SET_USINGRETURNID_OFFSET))(this, value);
	}

	::System::UInt32 get_UsingAssistGroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_GET_USINGASSISTGROUPID_OFFSET))(this);
	}

	::System::Void set_UsingAssistGroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_SET_USINGASSISTGROUPID_OFFSET))(this, value);
	}

	::System::Boolean get_IsAssistAvailable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_GET_ISASSISTAVAILABLE_OFFSET))(this);
	}

	::System::Void set_IsAssistAvailable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_SET_ISASSISTAVAILABLE_OFFSET))(this, value);
	}

	::RPG::Client::PlayerReturnTrialAvatarGroup* get_UsingTrialAvatarGroup()
	{
		return ((::RPG::Client::PlayerReturnTrialAvatarGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_GET_USINGTRIALAVATARGROUP_OFFSET))(this);
	}

	::System::Void set_UsingTrialAvatarGroup(::RPG::Client::PlayerReturnTrialAvatarGroup* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayerReturnTrialAvatarGroup*))((::PBYTE)hIl2Cpp + CLASS_1_2D3D502BC62D9FF7_SET_USINGTRIALAVATARGROUP_OFFSET))(this, value);
	}
};
