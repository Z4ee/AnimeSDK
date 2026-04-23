#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchFreeAreaPosition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x9ECC060)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMESLOTS_OFFSET UNITYSDK_OFFSET(0x9ECBEE0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREACOUNT_OFFSET UNITYSDK_OFFSET(0x9ECC0B0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREAPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9ECBF00)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_REMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x9ECC100)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9ECBEC0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0x9ECBDD0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFRAME_OFFSET UNITYSDK_OFFSET(0x9ECBF20)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFREEAREA_OFFSET UNITYSDK_OFFSET(0x9ECBF80)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FRAMESLOTS_OFFSET UNITYSDK_OFFSET(0x9ECBEF0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FREEAREAPOSITIONS_OFFSET UNITYSDK_OFFSET(0x9ECBF10)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x9ECBED0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x9ECB500)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeStatus_TypeDefinitionIndex = 58010;

	class CakeCatchArrangeStatus : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>* _FreeAreaPositions_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _FrameSlots_k__BackingField; // 0x18
		::System::UInt32 _TotalCount_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_TotalCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_TOTALCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_TOTALCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FrameSlots()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMESLOTS_OFFSET))(this);
		}

		::System::Void set_FrameSlots(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FRAMESLOTS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>* get_FreeAreaPositions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREAPOSITIONS_OFFSET))(this);
		}

		::System::Void set_FreeAreaPositions(::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FREEAREAPOSITIONS_OFFSET))(this, value);
		}

		::System::Boolean IsPlacedInFrame(::System::UInt32 slotId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFRAME_OFFSET))(this, slotId);
		}

		::System::Boolean IsPlacedInFreeArea(::System::UInt32 slotId, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFREEAREA_OFFSET))(this, slotId, index);
		}

		::System::UInt32 get_FrameCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_FreeAreaCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREACOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UsedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_USEDCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_RemainingCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_REMAININGCOUNT_OFFSET))(this);
		}
	};
}
