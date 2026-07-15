#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GachaCeilingAvatar; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGAVATARS_OFFSET UNITYSDK_OFFSET(0x192C3200)
#define RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGNUM_OFFSET UNITYSDK_OFFSET(0x192C31E0)
#define RPG_CLIENT_GACHACEILINGDATA_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0x192C3220)
#define RPG_CLIENT_GACHACEILINGDATA_SETCEILINGAVATAR_OFFSET UNITYSDK_OFFSET(0x192C3140)
#define RPG_CLIENT_GACHACEILINGDATA_SETCEILINGNUM_OFFSET UNITYSDK_OFFSET(0x192C30F0)
#define RPG_CLIENT_GACHACEILINGDATA_SETCLOSED_OFFSET UNITYSDK_OFFSET(0x192C3190)
#define RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGAVATARS_OFFSET UNITYSDK_OFFSET(0x192C3210)
#define RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGNUM_OFFSET UNITYSDK_OFFSET(0x192C31F0)
#define RPG_CLIENT_GACHACEILINGDATA_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0x192C3230)
#define RPG_CLIENT_GACHACEILINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x192C30E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaCeilingData_TypeDefinitionIndex = 61372;

	class GachaCeilingData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* _CeilingAvatars_k__BackingField; // 0x10
		::System::UInt32 _CeilingNum_k__BackingField; // 0x18
		::System::Boolean _Closed_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetCeilingNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SETCEILINGNUM_OFFSET))(this, a1);
		}

		::System::Void SetCeilingAvatar(::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SETCEILINGAVATAR_OFFSET))(this, a1);
		}

		::System::Void SetClosed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SETCLOSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_CeilingNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGNUM_OFFSET))(this);
		}

		::System::Void set_CeilingNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGNUM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* get_CeilingAvatars()
		{
			return ((::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGAVATARS_OFFSET))(this);
		}

		::System::Void set_CeilingAvatars(::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGAVATARS_OFFSET))(this, a1);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_GET_CLOSED_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SET_CLOSED_OFFSET))(this, a1);
		}
	};
}
