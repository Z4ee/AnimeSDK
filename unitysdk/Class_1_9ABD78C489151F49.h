#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightGameSession; }
namespace RPG::Client { class GridFightTraitBuffEffect; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9ABD78C489151F49_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x17E89370)
#define CLASS_1_9ABD78C489151F49_METHOD_1_992FB0F9FE255387_OFFSET UNITYSDK_OFFSET(0x17E894E0)
#define CLASS_1_9ABD78C489151F49__CTOR_OFFSET UNITYSDK_OFFSET(0x17E89410)

inline static constexpr unsigned int Class_1_9ABD78C489151F49_TypeDefinitionIndex = 62508;

class Class_1_9ABD78C489151F49 : public ::System::Object
{
public:
	static ::Class_1_9ABD78C489151F49** StaticGet_Field_1_0()
	{
		return (::Class_1_9ABD78C489151F49**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9ABD78C489151F49_TypeDefinitionIndex)->GetStaticField(0x320D0);
	}
	::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitBuffEffect*>* Field_1_1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9ABD78C489151F49__CTOR_OFFSET))(this);
	}

	static ::Class_1_9ABD78C489151F49* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_9ABD78C489151F49*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9ABD78C489151F49_METHOD_1_47FCE72550F759BF_OFFSET))();
	}

	::System::Void Method_1_992FB0F9FE255387(::RPG::Client::GridFightGameSession* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameSession*))((::PBYTE)hIl2Cpp + CLASS_1_9ABD78C489151F49_METHOD_1_992FB0F9FE255387_OFFSET))(this, a1);
	}
};
