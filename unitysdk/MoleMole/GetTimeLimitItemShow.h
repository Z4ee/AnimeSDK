#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class Class_1_2352DF1ADE2D65E3;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GETTIMELIMITITEMSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x19BF44C0)
#define MOLEMOLE_GETTIMELIMITITEMSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x19BF4670)
#define MOLEMOLE_GETTIMELIMITITEMSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x19BF44D0)
#define MOLEMOLE_GETTIMELIMITITEMSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BF4520)
#define MOLEMOLE_GETTIMELIMITITEMSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x19BF4800)

namespace MoleMole
{
	inline static constexpr unsigned int GetTimeLimitItemShow_TypeDefinitionIndex = 67331;

	class GetTimeLimitItemShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_2352DF1ADE2D65E3*>* ItemList; // 0x28

		::System::Void _ctor(::System::Collections::Generic::List_1<::Class_1_2352DF1ADE2D65E3*>* itemList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_2352DF1ADE2D65E3*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW__CTOR_OFFSET))(this, itemList);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GETTIMELIMITITEMSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
