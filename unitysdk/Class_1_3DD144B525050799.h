#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class PreloadObject; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3DD144B525050799_METHOD_1_05CE179F381679D8_OFFSET UNITYSDK_OFFSET(0xE98A180)
#define CLASS_1_3DD144B525050799_METHOD_1_C339485D56B0E80F_OFFSET UNITYSDK_OFFSET(0xE98A210)

inline static constexpr unsigned int Class_1_3DD144B525050799_TypeDefinitionIndex = 85253;

class Class_1_3DD144B525050799 : public ::System::Object
{
public:
	static ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>* Method_1_05CE179F381679D8(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_2<::System::String*, ::System::Type*>>*(*)(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_METHOD_1_05CE179F381679D8_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_C339485D56B0E80F(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>* a1, ::System::Func_2<::MoleMole::PreloadObject*, ::System::Boolean>* a2)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::MoleMole::PreloadObject*>*, ::System::Func_2<::MoleMole::PreloadObject*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_3DD144B525050799_METHOD_1_C339485D56B0E80F_OFFSET))(a1, a2);
	}
};
