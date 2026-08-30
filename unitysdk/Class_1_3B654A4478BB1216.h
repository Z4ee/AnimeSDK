#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_290F18DE0106AF33;
class Class_2_B66C1067C0468FBB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_3B654A4478BB1216_METHOD_1_1C8D83853CCD9B64_OFFSET UNITYSDK_OFFSET(0xBBE05D0)
#define CLASS_1_3B654A4478BB1216_METHOD_1_3D9D7F45F4F3BA0D_OFFSET UNITYSDK_OFFSET(0xBBDFEF0)
#define CLASS_1_3B654A4478BB1216_METHOD_1_E875885542B220AD_OFFSET UNITYSDK_OFFSET(0xBBE06D0)
#define CLASS_1_3B654A4478BB1216__CTOR_OFFSET UNITYSDK_OFFSET(0xBBE0850)

inline static constexpr unsigned int Class_1_3B654A4478BB1216_TypeDefinitionIndex = 77121;

class Class_1_3B654A4478BB1216 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3B654A4478BB1216__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3D9D7F45F4F3BA0D(::System::Int32 a1, ::Class_2_B66C1067C0468FBB* a2, ::Class_2_B66C1067C0468FBB* a3, ::System::Int32& a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_B66C1067C0468FBB*, ::Class_2_B66C1067C0468FBB*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_3B654A4478BB1216_METHOD_1_3D9D7F45F4F3BA0D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_1_1C8D83853CCD9B64(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_3B654A4478BB1216_METHOD_1_1C8D83853CCD9B64_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_290F18DE0106AF33*>* Method_1_E875885542B220AD(::System::String* a1, ::Class_2_B66C1067C0468FBB* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_1_290F18DE0106AF33*>*(*)(::PVOID, ::System::String*, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_1_3B654A4478BB1216_METHOD_1_E875885542B220AD_OFFSET))(this, a1, a2);
	}
};
