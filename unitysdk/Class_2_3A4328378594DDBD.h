#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_115.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_877;
class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_3A4328378594DDBD_METHOD_2_08A44229CA25E941_OFFSET UNITYSDK_OFFSET(0xB743200)
#define CLASS_2_3A4328378594DDBD_METHOD_2_0E5AEC953C77273E_OFFSET UNITYSDK_OFFSET(0xB7446B0)
#define CLASS_2_3A4328378594DDBD_METHOD_2_4D1308B985836BAF_OFFSET UNITYSDK_OFFSET(0xB744960)
#define CLASS_2_3A4328378594DDBD_METHOD_2_725C72DE2214630C_1_OFFSET UNITYSDK_OFFSET(0xB7435A0)
#define CLASS_2_3A4328378594DDBD_METHOD_2_725C72DE2214630C_OFFSET UNITYSDK_OFFSET(0xB743500)
#define CLASS_2_3A4328378594DDBD_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB743190)
#define CLASS_2_3A4328378594DDBD_METHOD_2_96548BB5E28CF746_OFFSET UNITYSDK_OFFSET(0xB743640)
#define CLASS_2_3A4328378594DDBD_METHOD_2_BF3A20F1100B8F5D_OFFSET UNITYSDK_OFFSET(0xB7432C0)
#define CLASS_2_3A4328378594DDBD__CTOR_OFFSET UNITYSDK_OFFSET(0xB7432B0)

inline static constexpr unsigned int Class_2_3A4328378594DDBD_TypeDefinitionIndex = 65362;

class Class_2_3A4328378594DDBD : public ::Class_1_43BD383C98B4C0C5_115
{
public:
	static ::Class_2_3A4328378594DDBD** StaticGet_FKKNPOBHKCD()
	{
		return (::Class_2_3A4328378594DDBD**)Il2CppClass::FromTypeDefinitionIndex(Class_2_3A4328378594DDBD_TypeDefinitionIndex)->GetStaticField(0x67040);
	}
	::Class_0_16E4307DCC419505_877* OJJHHDILCIA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD__CTOR_OFFSET))(this);
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	static ::Class_2_3A4328378594DDBD* Method_2_08A44229CA25E941()
	{
		return ((::Class_2_3A4328378594DDBD*(*)())((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_08A44229CA25E941_OFFSET))();
	}

	static ::Class_2_3A4328378594DDBD* Method_2_BF3A20F1100B8F5D()
	{
		return ((::Class_2_3A4328378594DDBD*(*)())((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_BF3A20F1100B8F5D_OFFSET))();
	}

	static ::Class_2_3A4328378594DDBD* Method_2_725C72DE2214630C(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Class_2_3A4328378594DDBD*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_725C72DE2214630C_OFFSET))(a1);
	}

	static ::Class_2_3A4328378594DDBD* Method_2_725C72DE2214630C_1(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* a1)
	{
		return ((::Class_2_3A4328378594DDBD*(*)(::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_725C72DE2214630C_1_OFFSET))(a1);
	}

	::System::String* Method_2_96548BB5E28CF746(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_96548BB5E28CF746_OFFSET))(this, a1, a2);
	}

	::System::UInt32 Method_2_4D1308B985836BAF(::RPG::GameCore::FixPoint a1, ::System::String* a2, ::System::Int32& a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_4D1308B985836BAF_OFFSET))(this, a1, a2, a3);
	}

	::System::UInt32 Method_2_0E5AEC953C77273E(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_3A4328378594DDBD_METHOD_2_0E5AEC953C77273E_OFFSET))(this, a1, a2);
	}
};
