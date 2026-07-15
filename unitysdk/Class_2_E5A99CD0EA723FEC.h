#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_110.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_2350AF62BA84EDFD;
class Class_1_2670985A37556FEA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define CLASS_2_E5A99CD0EA723FEC_METHOD_2_0E5AEC953C77273E_OFFSET UNITYSDK_OFFSET(0x181B6660)
#define CLASS_2_E5A99CD0EA723FEC_METHOD_2_5262BC49EFD121F6_OFFSET UNITYSDK_OFFSET(0x181B6220)
#define CLASS_2_E5A99CD0EA723FEC_METHOD_2_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x181B5E90)
#define CLASS_2_E5A99CD0EA723FEC_METHOD_2_A7F8207BBA14FDCD_OFFSET UNITYSDK_OFFSET(0x181B5F90)
#define CLASS_2_E5A99CD0EA723FEC_METHOD_2_B4A91A4ACDF9D75F_OFFSET UNITYSDK_OFFSET(0x181B5F10)
#define CLASS_2_E5A99CD0EA723FEC__CCTOR_OFFSET UNITYSDK_OFFSET(0x181B6920)
#define CLASS_2_E5A99CD0EA723FEC__CTOR_OFFSET UNITYSDK_OFFSET(0x181B5F00)

inline static constexpr unsigned int Class_2_E5A99CD0EA723FEC_TypeDefinitionIndex = 62357;

class Class_2_E5A99CD0EA723FEC : public ::Class_1_43BD383C98B4C0C5_110
{
public:
	static ::Class_2_E5A99CD0EA723FEC** StaticGet_Field_2_0()
	{
		return (::Class_2_E5A99CD0EA723FEC**)Il2CppClass::FromTypeDefinitionIndex(Class_2_E5A99CD0EA723FEC_TypeDefinitionIndex)->GetStaticField(0x3DE10);
	}
	::System::Collections::Generic::IDictionary_2<::System::String*, ::RPG::GameCore::FixPoint>* Field_2_1; // 0x10
	::Class_1_2670985A37556FEA* Field_2_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC__CCTOR_OFFSET))();
	}

	::System::String* Method_2_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC_METHOD_2_88B60F3B95FAA4F1_OFFSET))(this);
	}

	static ::Class_2_E5A99CD0EA723FEC* Method_2_B4A91A4ACDF9D75F()
	{
		return ((::Class_2_E5A99CD0EA723FEC*(*)())((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC_METHOD_2_B4A91A4ACDF9D75F_OFFSET))();
	}

	::System::String* Method_2_A7F8207BBA14FDCD(::Class_1_2670985A37556FEA* a1, ::Class_1_2350AF62BA84EDFD* a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_1_2670985A37556FEA*, ::Class_1_2350AF62BA84EDFD*))((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC_METHOD_2_A7F8207BBA14FDCD_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_5262BC49EFD121F6(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC_METHOD_2_5262BC49EFD121F6_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_0E5AEC953C77273E(::RPG::GameCore::FixPoint a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E5A99CD0EA723FEC_METHOD_2_0E5AEC953C77273E_OFFSET))(this, a1, a2);
	}
};
