#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_EAFC35CB4BD37D33_METHOD_1_8033331B7129B089_OFFSET UNITYSDK_OFFSET(0x15497970)
#define CLASS_1_EAFC35CB4BD37D33_METHOD_1_D13E3DF9AAF82812_OFFSET UNITYSDK_OFFSET(0x15497AE0)

inline static constexpr unsigned int Class_1_EAFC35CB4BD37D33_TypeDefinitionIndex = 6574;

class Class_1_EAFC35CB4BD37D33 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_8033331B7129B089(::System::Collections::Generic::IList_1<::RPG::MVector2>* a1, ::Il2CppArray<::System::Int32>*& a2, ::System::Int32& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector2>*, ::Il2CppArray<::System::Int32>*&, ::System::Int32&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EAFC35CB4BD37D33_METHOD_1_8033331B7129B089_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_D13E3DF9AAF82812(::System::Collections::Generic::IList_1<::RPG::MVector3>* a1, ::Il2CppArray<::System::Int32>*& a2, ::System::Int32& a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::RPG::MVector3>*, ::Il2CppArray<::System::Int32>*&, ::System::Int32&, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EAFC35CB4BD37D33_METHOD_1_D13E3DF9AAF82812_OFFSET))(a1, a2, a3, a4);
	}
};
