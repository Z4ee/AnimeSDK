#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_36816D4DE394D200;
class Class_1_ACDBC0A3CD89B5C3;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8DDC457C49061FD1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x979A850)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_091B35AA38A6D1A3_OFFSET UNITYSDK_OFFSET(0x979AD10)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_0C10C7E7E3750739_OFFSET UNITYSDK_OFFSET(0x979A990)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x979A760)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_43535ED8A0DF5FF8_OFFSET UNITYSDK_OFFSET(0x979B1A0)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_613D7391D33C4C9B_OFFSET UNITYSDK_OFFSET(0x979AF90)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_6A8F1A21C55F0C48_OFFSET UNITYSDK_OFFSET(0x979AA80)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_96BDC4B57CCFE000_OFFSET UNITYSDK_OFFSET(0x979AC30)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_CE3C9FF63C908564_OFFSET UNITYSDK_OFFSET(0x979AB60)
#define CLASS_1_8DDC457C49061FD1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x979B1B0)
#define CLASS_1_8DDC457C49061FD1__CTOR_OFFSET UNITYSDK_OFFSET(0x979B1C0)

inline static constexpr unsigned int Class_1_8DDC457C49061FD1_TypeDefinitionIndex = 66351;

class Class_1_8DDC457C49061FD1 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACDBC0A3CD89B5C3*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_ACDBC0A3CD89B5C3*>* Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_DISPOSE_OFFSET))(this);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_1_6A8F1A21C55F0C48(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_6A8F1A21C55F0C48_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_0C10C7E7E3750739()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_0C10C7E7E3750739_OFFSET))(this);
	}

	::System::Void Method_1_CE3C9FF63C908564(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_CE3C9FF63C908564_OFFSET))(this, a1);
	}

	::System::Void Method_1_96BDC4B57CCFE000(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_96BDC4B57CCFE000_OFFSET))(this, a1);
	}

	::System::Void Method_1_613D7391D33C4C9B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_613D7391D33C4C9B_OFFSET))(this, a1);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_1_091B35AA38A6D1A3(::Class_1_36816D4DE394D200* a1)
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_091B35AA38A6D1A3_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_43535ED8A0DF5FF8()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_43535ED8A0DF5FF8_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8DDC457C49061FD1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
