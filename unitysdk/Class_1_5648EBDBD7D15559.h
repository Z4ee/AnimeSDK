#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_777F514A924455D9;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_5648EBDBD7D15559_DISPOSE_OFFSET UNITYSDK_OFFSET(0x117CD600)
#define CLASS_1_5648EBDBD7D15559_METHOD_1_11070386E9019B49_OFFSET UNITYSDK_OFFSET(0x117CDED0)
#define CLASS_1_5648EBDBD7D15559_METHOD_1_2D89B5D16EC7DF74_OFFSET UNITYSDK_OFFSET(0x117CDC60)
#define CLASS_1_5648EBDBD7D15559_METHOD_1_D4A93ABB00B48900_OFFSET UNITYSDK_OFFSET(0x117CD850)
#define CLASS_1_5648EBDBD7D15559__CTOR_OFFSET UNITYSDK_OFFSET(0x117CD550)

inline static constexpr unsigned int Class_1_5648EBDBD7D15559_TypeDefinitionIndex = 49454;

class Class_1_5648EBDBD7D15559 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::MapProp*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::RPG::Client::MapPropDef*>* Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5648EBDBD7D15559__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5648EBDBD7D15559_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_D4A93ABB00B48900(::RPG::Client::MapDef* a1, ::Class_1_777F514A924455D9* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::Class_1_777F514A924455D9*))((::PBYTE)hIl2Cpp + CLASS_1_5648EBDBD7D15559_METHOD_1_D4A93ABB00B48900_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2D89B5D16EC7DF74(::RPG::GameCore::RuntimeGroupInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CLASS_1_5648EBDBD7D15559_METHOD_1_2D89B5D16EC7DF74_OFFSET))(this, a1);
	}

	::System::Void Method_1_11070386E9019B49(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_5648EBDBD7D15559_METHOD_1_11070386E9019B49_OFFSET))(this, a1);
	}
};
