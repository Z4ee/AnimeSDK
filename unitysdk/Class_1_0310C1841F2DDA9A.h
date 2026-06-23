#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_305;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0310C1841F2DDA9A_METHOD_1_09EFD1FA3DA8EB66_OFFSET UNITYSDK_OFFSET(0x14DD18A0)
#define CLASS_1_0310C1841F2DDA9A_METHOD_1_1733634770233FE4_OFFSET UNITYSDK_OFFSET(0x14DD19D0)
#define CLASS_1_0310C1841F2DDA9A_METHOD_1_733CA18BFB9A2EE1_OFFSET UNITYSDK_OFFSET(0x14DD1B00)
#define CLASS_1_0310C1841F2DDA9A_METHOD_1_9CE6D2845E53470E_OFFSET UNITYSDK_OFFSET(0x14DD17B0)
#define CLASS_1_0310C1841F2DDA9A_METHOD_1_D543C6723125367E_OFFSET UNITYSDK_OFFSET(0x14DD1B10)
#define CLASS_1_0310C1841F2DDA9A__CTOR_OFFSET UNITYSDK_OFFSET(0x14DD17A0)

inline static constexpr unsigned int Class_1_0310C1841F2DDA9A_TypeDefinitionIndex = 69528;

class Class_1_0310C1841F2DDA9A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0310C1841F2DDA9A__CTOR_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_305* Method_1_9CE6D2845E53470E(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_305*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0310C1841F2DDA9A_METHOD_1_9CE6D2845E53470E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_09EFD1FA3DA8EB66(::System::String* a1, ::System::Boolean& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0310C1841F2DDA9A_METHOD_1_09EFD1FA3DA8EB66_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1733634770233FE4(::System::String* a1, ::System::Int32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_1_0310C1841F2DDA9A_METHOD_1_1733634770233FE4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Method_1_733CA18BFB9A2EE1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0310C1841F2DDA9A_METHOD_1_733CA18BFB9A2EE1_OFFSET))(this);
	}

	::System::Void Method_1_D543C6723125367E(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_0310C1841F2DDA9A_METHOD_1_D543C6723125367E_OFFSET))(this, a1);
	}
};
