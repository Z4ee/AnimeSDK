#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CakeCatchFreeAreaPosition; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1A12DCD0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMESLOTS_OFFSET UNITYSDK_OFFSET(0x1A12DAD0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREACOUNT_OFFSET UNITYSDK_OFFSET(0x1A12DD20)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREAPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A12DAF0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_REMAININGCOUNT_OFFSET UNITYSDK_OFFSET(0x1A12DD70)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1A12DAB0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_USEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1A12D9C0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFRAME_OFFSET UNITYSDK_OFFSET(0x1A12DB10)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFREEAREA_OFFSET UNITYSDK_OFFSET(0x1A12DBD0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FRAMESLOTS_OFFSET UNITYSDK_OFFSET(0x1A12DAE0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FREEAREAPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1A12DB00)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_TOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1A12DAC0)
#define RPG_CLIENT_CAKECATCHARRANGESTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A12CFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int CakeCatchArrangeStatus_TypeDefinitionIndex = 63045;

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

		::System::Void set_TotalCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_TOTALCOUNT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FrameSlots()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FRAMESLOTS_OFFSET))(this);
		}

		::System::Void set_FrameSlots(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FRAMESLOTS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>* get_FreeAreaPositions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_GET_FREEAREAPOSITIONS_OFFSET))(this);
		}

		::System::Void set_FreeAreaPositions(::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::CakeCatchFreeAreaPosition*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_SET_FREEAREAPOSITIONS_OFFSET))(this, a1);
		}

		::System::Boolean IsPlacedInFrame(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFRAME_OFFSET))(this, a1);
		}

		::System::Boolean IsPlacedInFreeArea(::System::UInt32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAKECATCHARRANGESTATUS_ISPLACEDINFREEAREA_OFFSET))(this, a1, a2);
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
