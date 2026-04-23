#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_AREASLOTID_OFFSET UNITYSDK_OFFSET(0x9ED03D0)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_INDEXINLIST_OFFSET UNITYSDK_OFFSET(0x9ED03F0)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_AREASLOTID_OFFSET UNITYSDK_OFFSET(0x9ED03E0)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_INDEXINLIST_OFFSET UNITYSDK_OFFSET(0x9ED0400)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECB760)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchFreeAreaPosition_TypeDefinitionIndex = 58009;

	class CakeCatchFreeAreaPosition : public ::System::Object
	{
	public:
		::System::UInt32 _AreaSlotId_k__BackingField; // 0x10
		::System::Int32 _IndexInList_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_AREASLOTID_OFFSET))(this);
		}

		::System::Void set_AreaSlotId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_AREASLOTID_OFFSET))(this, value);
		}

		::System::Int32 get_IndexInList()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_INDEXINLIST_OFFSET))(this);
		}

		::System::Void set_IndexInList(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_INDEXINLIST_OFFSET))(this, value);
		}
	};
}
