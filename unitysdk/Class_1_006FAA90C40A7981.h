#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9BF8902D61AE1796.h"
#include "unitysdk/System/Object.h"

class Class_1_006FAA90C40A7981_Class_3_48DBB9F4381E040F_2;
class Class_1_24C2E7EF22229C6A;
class Class_2_9DD8A46984F1AFFD;
class Class_3_1A92845FAFA5EC77;
namespace Entitas { class IComponent; }
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_006FAA90C40A7981_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12B22FD0)
#define CLASS_1_006FAA90C40A7981_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12B22020)
#define CLASS_1_006FAA90C40A7981_METHOD_1_01774206ABF53A0E_OFFSET UNITYSDK_OFFSET(0x12B226C0)
#define CLASS_1_006FAA90C40A7981_METHOD_1_5F2AA97836F1C33A_OFFSET UNITYSDK_OFFSET(0x12B23AD0)
#define CLASS_1_006FAA90C40A7981_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x12B23A00)
#define CLASS_1_006FAA90C40A7981_METHOD_1_A1E4F81A1391F369_OFFSET UNITYSDK_OFFSET(0x12B23240)
#define CLASS_1_006FAA90C40A7981_METHOD_1_CAD72CA6EDE4556D_OFFSET UNITYSDK_OFFSET(0x12B23480)
#define CLASS_1_006FAA90C40A7981_METHOD_1_E16846F6D6EF4D1B_1_OFFSET UNITYSDK_OFFSET(0x12B23C70)
#define CLASS_1_006FAA90C40A7981_METHOD_1_E16846F6D6EF4D1B_OFFSET UNITYSDK_OFFSET(0x12B23C20)
#define CLASS_1_006FAA90C40A7981_METHOD_1_F9555880FBE027D5_OFFSET UNITYSDK_OFFSET(0x12B237B0)
#define CLASS_1_006FAA90C40A7981_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x12B22A80)
#define CLASS_1_006FAA90C40A7981__CTOR_OFFSET UNITYSDK_OFFSET(0x12B21D70)

inline static constexpr unsigned int Class_1_006FAA90C40A7981_TypeDefinitionIndex = 70871;

class Class_1_006FAA90C40A7981 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_8; // 0x0
	// static const ::System::String* Field_1_9; // 0x0
	::Class_1_24C2E7EF22229C6A* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_006FAA90C40A7981_Class_3_48DBB9F4381E040F_2*>* Field_1_4; // 0x18
	::Struct_2_9BF8902D61AE1796 Field_1_10; // 0x20
	::Entitas::ICollector_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_3; // 0xB0
	::Class_3_1A92845FAFA5EC77* Field_1_1; // 0xB8
	::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* Field_1_2; // 0xC0
	::Struct_2_9BF8902D61AE1796 Field_1_11; // 0xC8
	::System::Boolean Field_1_5; // 0x158
	::System::Boolean Field_1_7; // 0x159
	::System::Boolean Field_1_6; // 0x15A

	::System::Void _ctor(::Class_1_24C2E7EF22229C6A* a1, ::Class_3_1A92845FAFA5EC77* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_24C2E7EF22229C6A*, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_INITIALIZE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_TEARDOWN_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_01774206ABF53A0E(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_01774206ABF53A0E_OFFSET))(this, a1);
	}

	::System::Void Method_1_A1E4F81A1391F369(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_A1E4F81A1391F369_OFFSET))(this, a1);
	}

	::System::Void Method_1_CAD72CA6EDE4556D(::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>* a1, ::Class_2_9DD8A46984F1AFFD* a2, ::System::Int32 a3, ::Entitas::IComponent* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IGroup_1<::Class_2_9DD8A46984F1AFFD*>*, ::Class_2_9DD8A46984F1AFFD*, ::System::Int32, ::Entitas::IComponent*))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_CAD72CA6EDE4556D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F9555880FBE027D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_F9555880FBE027D5_OFFSET))(this);
	}

	::System::Void Method_1_5F2AA97836F1C33A(::Class_2_9DD8A46984F1AFFD* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_9DD8A46984F1AFFD*))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_5F2AA97836F1C33A_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_E16846F6D6EF4D1B_OFFSET))(this);
	}

	::System::Void Method_1_E16846F6D6EF4D1B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_006FAA90C40A7981_METHOD_1_E16846F6D6EF4D1B_1_OFFSET))(this);
	}
};
