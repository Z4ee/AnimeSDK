#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8EE73BB839E63837.h"
#include "unitysdk/RPG/Client/Prop/ChimePuzzle/ChimeProxy.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_4BAF41C500DED921_METHOD_2_0A32ABCEA39CED97_OFFSET UNITYSDK_OFFSET(0x19AB7B00)
#define CLASS_2_4BAF41C500DED921_METHOD_2_E240D159E3150659_OFFSET UNITYSDK_OFFSET(0x19AB7B80)
#define CLASS_2_4BAF41C500DED921__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB7A80)

inline static constexpr unsigned int Class_2_4BAF41C500DED921_TypeDefinitionIndex = 78514;

class Class_2_4BAF41C500DED921 : public ::Class_1_8EE73BB839E63837
{
public:
	::Il2CppArray<::System::Int32>* NAGGDFKKBCN; // 0x30

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimePuzzle::ChimeProxy>*, ::Il2CppArray<::System::Int32>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::HashSet_1<::System::Int32>*>*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Boolean Method_2_0A32ABCEA39CED97(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921_METHOD_2_0A32ABCEA39CED97_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_E240D159E3150659()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BAF41C500DED921_METHOD_2_E240D159E3150659_OFFSET))(this);
	}
};
