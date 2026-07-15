#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_99;
class Class_1_21DCD4640D389503_44;
class Class_1_81D0599DA316CC24;
class Class_1_942D03E5A029CB94;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_F506C0720C4C81F3_METHOD_1_1C7F2067B6B8305E_OFFSET UNITYSDK_OFFSET(0x12E82080)
#define CLASS_1_F506C0720C4C81F3_METHOD_1_9E6772779A8E43B9_OFFSET UNITYSDK_OFFSET(0x12E82340)
#define CLASS_1_F506C0720C4C81F3_METHOD_1_EE481A926642501F_OFFSET UNITYSDK_OFFSET(0x12E820D0)

inline static constexpr unsigned int Class_1_F506C0720C4C81F3_TypeDefinitionIndex = 39358;

class Class_1_F506C0720C4C81F3 : public ::System::Object
{
public:
	static ::Class_0_16E4307DCC419505_99* Method_1_1C7F2067B6B8305E(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_0_16E4307DCC419505_99*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F506C0720C4C81F3_METHOD_1_1C7F2067B6B8305E_OFFSET))(a1, a2);
	}

	static ::Class_1_81D0599DA316CC24* Method_1_EE481A926642501F(::System::String* a1, ::System::String* a2)
	{
		return ((::Class_1_81D0599DA316CC24*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F506C0720C4C81F3_METHOD_1_EE481A926642501F_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_9E6772779A8E43B9(::System::String* a1, ::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_44*>* a2, ::System::Collections::Generic::IEnumerable_1<::Class_1_942D03E5A029CB94*>* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::IEnumerable_1<::Class_1_21DCD4640D389503_44*>*, ::System::Collections::Generic::IEnumerable_1<::Class_1_942D03E5A029CB94*>*))((::PBYTE)hIl2Cpp + CLASS_1_F506C0720C4C81F3_METHOD_1_9E6772779A8E43B9_OFFSET))(a1, a2, a3);
	}
};
