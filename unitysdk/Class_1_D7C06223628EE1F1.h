#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightManager; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_1_D7C06223628EE1F1_METHOD_1_8F8D080EF5D1D761_OFFSET UNITYSDK_OFFSET(0x87971F0)
#define CLASS_1_D7C06223628EE1F1_METHOD_1_C4FE8DB3842E6F0F_OFFSET UNITYSDK_OFFSET(0x8797360)
#define CLASS_1_D7C06223628EE1F1__CTOR_OFFSET UNITYSDK_OFFSET(0x87971E0)

inline static constexpr unsigned int Class_1_D7C06223628EE1F1_TypeDefinitionIndex = 53027;

class Class_1_D7C06223628EE1F1 : public ::System::Object
{
public:
	::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_1_D7C06223628EE1F1__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::GridFightManager* Method_1_8F8D080EF5D1D761()
	{
		return ((::RPG::GameCore::GridFightManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D7C06223628EE1F1_METHOD_1_8F8D080EF5D1D761_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_1_C4FE8DB3842E6F0F(::System::String* a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D7C06223628EE1F1_METHOD_1_C4FE8DB3842E6F0F_OFFSET))(this, a1);
	}
};
