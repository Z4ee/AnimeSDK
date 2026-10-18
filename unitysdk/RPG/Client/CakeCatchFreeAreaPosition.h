#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_AREASLOTID_OFFSET UNITYSDK_OFFSET(0xC8E2270)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_INDEXINLIST_OFFSET UNITYSDK_OFFSET(0xC8E2290)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_AREASLOTID_OFFSET UNITYSDK_OFFSET(0xC8E2280)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_INDEXINLIST_OFFSET UNITYSDK_OFFSET(0xC8E22A0)
#define RPG_CLIENT_CAKECATCHFREEAREAPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0xC8DD330)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchFreeAreaPosition_TypeDefinitionIndex = 62977;

	class CakeCatchFreeAreaPosition : public ::System::Object
	{
	public:
		::System::Int32 _IndexInList_k__BackingField; // 0x10
		::System::UInt32 _AreaSlotId_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_AreaSlotId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_AREASLOTID_OFFSET))(this);
		}

		::System::Void set_AreaSlotId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_AREASLOTID_OFFSET))(this, a1);
		}

		::System::Int32 get_IndexInList()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_GET_INDEXINLIST_OFFSET))(this);
		}

		::System::Void set_IndexInList(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHFREEAREAPOSITION_SET_INDEXINLIST_OFFSET))(this, a1);
		}
	};
}
