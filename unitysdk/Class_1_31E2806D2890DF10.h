#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5D9FADE393C1BEBA_UIElementType.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"

class Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_31E2806D2890DF10_METHOD_1_CEDA25BED0903001_OFFSET UNITYSDK_OFFSET(0xA457B80)
#define CLASS_1_31E2806D2890DF10__CTOR_OFFSET UNITYSDK_OFFSET(0xA457D60)

inline static constexpr unsigned int Class_1_31E2806D2890DF10_TypeDefinitionIndex = 48476;

class Class_1_31E2806D2890DF10 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::Client::CloudUIBattlePosRegion, ::Class_1_5D9FADE393C1BEBA_UIElementType>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_31E2806D2890DF10__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>* Method_1_CEDA25BED0903001(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_31E2806D2890DF10_METHOD_1_CEDA25BED0903001_OFFSET))(this, a1);
	}
};
