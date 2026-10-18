#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_50E20E5176818C30;
class Class_3_9A60053C76BB6B5C;
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class SimplePetAppearance; }
namespace RPG::GameCore { class ItemRow; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_07943CDD7B095A0E_OFFSET UNITYSDK_OFFSET(0xB812520)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_0D62FC38CC5C1E0E_OFFSET UNITYSDK_OFFSET(0xB812420)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_28F8F962CFE5F729_OFFSET UNITYSDK_OFFSET(0xB812870)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_71D502FB2671C546_OFFSET UNITYSDK_OFFSET(0xB812680)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_ABB56049B4A5C88E_OFFSET UNITYSDK_OFFSET(0xB812A50)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_AFB528834E18EF2C_OFFSET UNITYSDK_OFFSET(0xB812790)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_B657C97BCCA720F2_OFFSET UNITYSDK_OFFSET(0xB812B40)
#define CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_CFB3119F7A31A609_OFFSET UNITYSDK_OFFSET(0xB812140)

inline static constexpr unsigned int Class_1_4AF5EF0BDDC23B6D_TypeDefinitionIndex = 75668;

class Class_1_4AF5EF0BDDC23B6D : public ::System::Object
{
public:
	static ::RPG::Client::Pet::IPet* Method_1_CFB3119F7A31A609(::System::UInt32 a1)
	{
		return ((::RPG::Client::Pet::IPet*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_CFB3119F7A31A609_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_AFB528834E18EF2C(::System::UInt32 a1, ::RPG::Client::Pet::IPet*& a2)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::RPG::Client::Pet::IPet*&))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_AFB528834E18EF2C_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_28F8F962CFE5F729(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_28F8F962CFE5F729_OFFSET))(a1);
	}

	static ::System::Void Method_1_ABB56049B4A5C88E(::System::Action_1<::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_ABB56049B4A5C88E_OFFSET))(a1);
	}

	static ::System::Void Method_1_B657C97BCCA720F2(::Class_3_9A60053C76BB6B5C* a1)
	{
		return ((::System::Void(*)(::Class_3_9A60053C76BB6B5C*))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_B657C97BCCA720F2_OFFSET))(a1);
	}

	static ::RPG::Client::Pet::SimplePetAppearance* Method_1_71D502FB2671C546(::Class_1_50E20E5176818C30* a1, ::RPG::GameCore::ItemRow* a2)
	{
		return ((::RPG::Client::Pet::SimplePetAppearance*(*)(::Class_1_50E20E5176818C30*, ::RPG::GameCore::ItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_71D502FB2671C546_OFFSET))(a1, a2);
	}

	static ::Class_1_50E20E5176818C30* Method_1_0D62FC38CC5C1E0E(::System::UInt32 a1)
	{
		return ((::Class_1_50E20E5176818C30*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_0D62FC38CC5C1E0E_OFFSET))(a1);
	}

	static ::RPG::GameCore::ItemRow* Method_1_07943CDD7B095A0E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ItemRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AF5EF0BDDC23B6D_METHOD_1_07943CDD7B095A0E_OFFSET))(a1, a2);
	}
};
