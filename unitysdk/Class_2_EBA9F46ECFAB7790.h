#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_96.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_EBA9F46ECFAB7790_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x129F3350)
#define CLASS_2_EBA9F46ECFAB7790_METHOD_2_2D8A2EA5227E208F_OFFSET UNITYSDK_OFFSET(0x129F3640)
#define CLASS_2_EBA9F46ECFAB7790_METHOD_2_64B6514CFF8F8D76_OFFSET UNITYSDK_OFFSET(0x129F33A0)
#define CLASS_2_EBA9F46ECFAB7790_METHOD_2_A7F8207BBA14FDCD_OFFSET UNITYSDK_OFFSET(0x129F3400)
#define CLASS_2_EBA9F46ECFAB7790_METHOD_2_F745997B4997525D_OFFSET UNITYSDK_OFFSET(0x129F3AB0)
#define CLASS_2_EBA9F46ECFAB7790__CCTOR_OFFSET UNITYSDK_OFFSET(0x129F3D10)
#define CLASS_2_EBA9F46ECFAB7790__CTOR_OFFSET UNITYSDK_OFFSET(0x129F3390)

inline static constexpr unsigned int Class_2_EBA9F46ECFAB7790_TypeDefinitionIndex = 60102;

class Class_2_EBA9F46ECFAB7790 : public ::Class_1_43BD383C98B4C0C5_96
{
public:
	static ::Class_2_EBA9F46ECFAB7790** StaticGet_Field_2_2()
	{
		return (::Class_2_EBA9F46ECFAB7790**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EBA9F46ECFAB7790_TypeDefinitionIndex)->GetStaticField(0x3C210);
	}
	::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_2_1; // 0x10
	::Class_1_2670985A37556FEA* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790__CCTOR_OFFSET))();
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790_METHOD_2_128774387667156B_OFFSET))(this);
	}

	static ::Class_2_EBA9F46ECFAB7790* Method_2_64B6514CFF8F8D76()
	{
		return ((::Class_2_EBA9F46ECFAB7790*(*)())((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790_METHOD_2_64B6514CFF8F8D76_OFFSET))();
	}

	::System::String* Method_2_A7F8207BBA14FDCD(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790_METHOD_2_A7F8207BBA14FDCD_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_2D8A2EA5227E208F(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790_METHOD_2_2D8A2EA5227E208F_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_F745997B4997525D(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_EBA9F46ECFAB7790_METHOD_2_F745997B4997525D_OFFSET))(this, a1, a2);
	}
};
