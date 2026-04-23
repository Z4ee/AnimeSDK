#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"

class Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8;
class Class_2_2B7BD8F617A0307D;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1FC39CB8897DFB4_METHOD_1_AB26FB330C9D1F56_OFFSET UNITYSDK_OFFSET(0x9A6EB00)
#define CLASS_1_F1FC39CB8897DFB4_METHOD_1_E962DEA66E6678FA_OFFSET UNITYSDK_OFFSET(0x9A6E610)
#define CLASS_1_F1FC39CB8897DFB4__CTOR_OFFSET UNITYSDK_OFFSET(0x9A6EC50)

inline static constexpr unsigned int Class_1_F1FC39CB8897DFB4_TypeDefinitionIndex = 55228;

class Class_1_F1FC39CB8897DFB4 : public ::System::Object
{
public:
	::RPG::Client::CloudUIBattlePosRegion Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FC39CB8897DFB4__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>* Method_1_E962DEA66E6678FA(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_F1FC39CB8897DFB4_METHOD_1_E962DEA66E6678FA_OFFSET))(this, a1);
	}

	::Class_2_2B7BD8F617A0307D* Method_1_AB26FB330C9D1F56()
	{
		return ((::Class_2_2B7BD8F617A0307D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1FC39CB8897DFB4_METHOD_1_AB26FB330C9D1F56_OFFSET))(this);
	}
};
