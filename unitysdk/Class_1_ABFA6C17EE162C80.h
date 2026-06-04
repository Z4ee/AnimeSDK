#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CloudUIBattlePosRegion.h"
#include "unitysdk/System/Object.h"

class Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8;
class Class_2_2B7BD8F617A0307D;
namespace RPG::Client { class CloudUIPosReporterMono; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_ABFA6C17EE162C80_METHOD_1_3D2F109113F44D89_OFFSET UNITYSDK_OFFSET(0x13D06350)
#define CLASS_1_ABFA6C17EE162C80_METHOD_1_65DCE21F154236CC_OFFSET UNITYSDK_OFFSET(0x13D06890)
#define CLASS_1_ABFA6C17EE162C80__CTOR_OFFSET UNITYSDK_OFFSET(0x13D069F0)

inline static constexpr unsigned int Class_1_ABFA6C17EE162C80_TypeDefinitionIndex = 55962;

class Class_1_ABFA6C17EE162C80 : public ::System::Object
{
public:
	::RPG::Client::CloudUIBattlePosRegion Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABFA6C17EE162C80__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>* Method_1_3D2F109113F44D89(::RPG::Client::CloudUIPosReporterMono* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_5D9FADE393C1BEBA_Class_1_880304D4E9A590C8*>*(*)(::PVOID, ::RPG::Client::CloudUIPosReporterMono*))((::PBYTE)hIl2Cpp + CLASS_1_ABFA6C17EE162C80_METHOD_1_3D2F109113F44D89_OFFSET))(this, a1);
	}

	::Class_2_2B7BD8F617A0307D* Method_1_65DCE21F154236CC()
	{
		return ((::Class_2_2B7BD8F617A0307D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABFA6C17EE162C80_METHOD_1_65DCE21F154236CC_OFFSET))(this);
	}
};
