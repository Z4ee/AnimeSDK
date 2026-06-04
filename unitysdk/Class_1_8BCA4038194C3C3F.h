#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AvatarUpgradePart.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_360;
class Class_0_16E4307DCC419505_723;
class Class_1_090AB0EAA610410E;
class Class_1_61097837E1D530F4;
class Class_1_8BCA4038194C3C3F_Class_1_93F9BF87AD7C9330;
namespace RPG::AvatarSystem { class IAvatar; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_1_8BCA4038194C3C3F_METHOD_1_1318DBDAD3307BE7_OFFSET UNITYSDK_OFFSET(0xAD226C0)
#define CLASS_1_8BCA4038194C3C3F_METHOD_1_14CAF04769217469_OFFSET UNITYSDK_OFFSET(0xAD21F10)
#define CLASS_1_8BCA4038194C3C3F_METHOD_1_1ED30A31A1493904_OFFSET UNITYSDK_OFFSET(0xAD221A0)
#define CLASS_1_8BCA4038194C3C3F_METHOD_1_7FA4AA1ED3B01876_OFFSET UNITYSDK_OFFSET(0xAD22650)
#define CLASS_1_8BCA4038194C3C3F_METHOD_1_F118FD47FCAE89A6_OFFSET UNITYSDK_OFFSET(0xAD22090)
#define CLASS_1_8BCA4038194C3C3F__CTOR_OFFSET UNITYSDK_OFFSET(0xAD22860)

inline static constexpr unsigned int Class_1_8BCA4038194C3C3F_TypeDefinitionIndex = 58782;

class Class_1_8BCA4038194C3C3F : public ::System::Object
{
public:
	::System::Collections::Generic::SortedDictionary_2<::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_723*>* Field_1_0; // 0x10
	::Class_1_8BCA4038194C3C3F_Class_1_93F9BF87AD7C9330* Field_1_1; // 0x18
	::Class_0_16E4307DCC419505_360* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BCA4038194C3C3F__CTOR_OFFSET))(this);
	}

	::Class_1_8BCA4038194C3C3F_Class_1_93F9BF87AD7C9330* Method_1_14CAF04769217469(::RPG::Client::AvatarUpgradePart a1, ::Class_0_16E4307DCC419505_723* a2)
	{
		return ((::Class_1_8BCA4038194C3C3F_Class_1_93F9BF87AD7C9330*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart, ::Class_0_16E4307DCC419505_723*))((::PBYTE)hIl2Cpp + CLASS_1_8BCA4038194C3C3F_METHOD_1_14CAF04769217469_OFFSET))(this, a1, a2);
	}

	::Class_1_8BCA4038194C3C3F_Class_1_93F9BF87AD7C9330* Method_1_F118FD47FCAE89A6(::Class_0_16E4307DCC419505_360* a1)
	{
		return ((::Class_1_8BCA4038194C3C3F_Class_1_93F9BF87AD7C9330*(*)(::PVOID, ::Class_0_16E4307DCC419505_360*))((::PBYTE)hIl2Cpp + CLASS_1_8BCA4038194C3C3F_METHOD_1_F118FD47FCAE89A6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1ED30A31A1493904(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2, ::RPG::Client::AvatarUpgradePart a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_8BCA4038194C3C3F_METHOD_1_1ED30A31A1493904_OFFSET))(this, a1, a2, a3);
	}

	::Class_1_090AB0EAA610410E* Method_1_1318DBDAD3307BE7(::RPG::AvatarSystem::IAvatar* a1, ::Class_1_61097837E1D530F4* a2)
	{
		return ((::Class_1_090AB0EAA610410E*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::Class_1_61097837E1D530F4*))((::PBYTE)hIl2Cpp + CLASS_1_8BCA4038194C3C3F_METHOD_1_1318DBDAD3307BE7_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_723*>* Method_1_7FA4AA1ED3B01876(::RPG::Client::AvatarUpgradePart a1)
	{
		return ((::System::Collections::Generic::IEnumerable_1<::Class_0_16E4307DCC419505_723*>*(*)(::PVOID, ::RPG::Client::AvatarUpgradePart))((::PBYTE)hIl2Cpp + CLASS_1_8BCA4038194C3C3F_METHOD_1_7FA4AA1ED3B01876_OFFSET))(this, a1);
	}
};
