#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameTargetMemoryType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_260;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_57FBFC8FFCE76BAE_METHOD_1_C3BC78FE0816289A_OFFSET UNITYSDK_OFFSET(0x137A64C0)

inline static constexpr unsigned int Class_1_57FBFC8FFCE76BAE_TypeDefinitionIndex = 71912;

class Class_1_57FBFC8FFCE76BAE : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::Int32>* Method_1_C3BC78FE0816289A(::Class_0_16E4307DCC419505_260* a1, ::RPG::GameCore::LittleGameTargetMemoryType a2, ::System::String* a3)
	{
		return ((::System::Collections::Generic::HashSet_1<::System::Int32>*(*)(::Class_0_16E4307DCC419505_260*, ::RPG::GameCore::LittleGameTargetMemoryType, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_57FBFC8FFCE76BAE_METHOD_1_C3BC78FE0816289A_OFFSET))(a1, a2, a3);
	}
};
