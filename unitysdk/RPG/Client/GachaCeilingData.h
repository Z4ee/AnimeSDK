#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Proto { class GachaCeilingAvatar; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGAVATARS_OFFSET UNITYSDK_OFFSET(0xA40EF50)
#define RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGNUM_OFFSET UNITYSDK_OFFSET(0xA40EF30)
#define RPG_CLIENT_GACHACEILINGDATA_GET_CLOSED_OFFSET UNITYSDK_OFFSET(0xA40EF70)
#define RPG_CLIENT_GACHACEILINGDATA_SETCEILINGAVATAR_OFFSET UNITYSDK_OFFSET(0xA40EE90)
#define RPG_CLIENT_GACHACEILINGDATA_SETCEILINGNUM_OFFSET UNITYSDK_OFFSET(0xA40EE40)
#define RPG_CLIENT_GACHACEILINGDATA_SETCLOSED_OFFSET UNITYSDK_OFFSET(0xA40EEE0)
#define RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGAVATARS_OFFSET UNITYSDK_OFFSET(0xA40EF60)
#define RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGNUM_OFFSET UNITYSDK_OFFSET(0xA40EF40)
#define RPG_CLIENT_GACHACEILINGDATA_SET_CLOSED_OFFSET UNITYSDK_OFFSET(0xA40EF80)
#define RPG_CLIENT_GACHACEILINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA40EE30)

namespace RPG::Client
{
	inline static constexpr unsigned int GachaCeilingData_TypeDefinitionIndex = 59153;

	class GachaCeilingData : public ::System::Object
	{
	public:
		::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* _CeilingAvatars_k__BackingField; // 0x10
		::System::UInt32 _CeilingNum_k__BackingField; // 0x18
		::System::Boolean _Closed_k__BackingField; // 0x1C

		::System::Void _ctor(::System::UInt32 ceilingNum, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* ceilingAvtars, ::System::Boolean closed)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA__CTOR_OFFSET))(this, ceilingNum, ceilingAvtars, closed);
		}

		::System::Void SetCeilingNum(::System::UInt32 ceilingNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SETCEILINGNUM_OFFSET))(this, ceilingNum);
		}

		::System::Void SetCeilingAvatar(::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* ceilingAvtars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SETCEILINGAVATAR_OFFSET))(this, ceilingAvtars);
		}

		::System::Void SetClosed(::System::Boolean closed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SETCLOSED_OFFSET))(this, closed);
		}

		::System::UInt32 get_CeilingNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGNUM_OFFSET))(this);
		}

		::System::Void set_CeilingNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGNUM_OFFSET))(this, value);
		}

		::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* get_CeilingAvatars()
		{
			return ((::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_GET_CEILINGAVATARS_OFFSET))(this);
		}

		::System::Void set_CeilingAvatars(::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::GachaCeilingAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SET_CEILINGAVATARS_OFFSET))(this, value);
		}

		::System::Boolean get_Closed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_GET_CLOSED_OFFSET))(this);
		}

		::System::Void set_Closed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GACHACEILINGDATA_SET_CLOSED_OFFSET))(this, value);
		}
	};
}
