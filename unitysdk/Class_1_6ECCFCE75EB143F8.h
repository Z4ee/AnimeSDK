#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"

class Class_1_C50814066AD5D308;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6ECCFCE75EB143F8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165B8390)
#define CLASS_1_6ECCFCE75EB143F8__CTOR_OFFSET UNITYSDK_OFFSET(0x165B8430)

inline static constexpr unsigned int Class_1_6ECCFCE75EB143F8_TypeDefinitionIndex = 56279;

class Class_1_6ECCFCE75EB143F8 : public ::System::Object
{
public:
	::Class_1_C50814066AD5D308* IBAADNINFCG; // 0x10
	::System::Collections::Generic::List_1<::Class_1_C50814066AD5D308*>* AGMDLHDNBGK; // 0x18
	::RPG::GameCore::FateTraitType FBFCPNADPKB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ECCFCE75EB143F8__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6ECCFCE75EB143F8_DISPOSE_OFFSET))(this);
	}
};
