#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityRelationMemberType.h"
#include "unitysdk/RPG/GameCore/EntityRelationType.h"
#include "unitysdk/Struct_2_1BCFFD1346322700.h"
#include "unitysdk/System/Object.h"

class Class_1_BAEFE151626ED1A5;
namespace RPG::GameCore { class GameEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BD5E51775B324A7D_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF53640)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xBF53FD0)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_272E83D05B98F419_OFFSET UNITYSDK_OFFSET(0xBF53DE0)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_724A3C2692D2F7EA_OFFSET UNITYSDK_OFFSET(0xBF536C0)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0xBF53F70)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_7EBFF01BB23D374B_OFFSET UNITYSDK_OFFSET(0xBF53EA0)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_8C20B8310FB0178A_OFFSET UNITYSDK_OFFSET(0xBF35640)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_93637CD7AE4EB538_OFFSET UNITYSDK_OFFSET(0xBF53FC0)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_99D5CA958F67E07B_OFFSET UNITYSDK_OFFSET(0xBF53730)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0xBF53790)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_D3B45CC300E6D4AB_OFFSET UNITYSDK_OFFSET(0xBF53850)
#define CLASS_1_BD5E51775B324A7D_METHOD_1_DB67EEFB041425EC_OFFSET UNITYSDK_OFFSET(0xBF537F0)
#define CLASS_1_BD5E51775B324A7D__CTOR_OFFSET UNITYSDK_OFFSET(0xBF54030)

inline static constexpr unsigned int Class_1_BD5E51775B324A7D_TypeDefinitionIndex = 51424;

class Class_1_BD5E51775B324A7D : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_1BCFFD1346322700>* Field_1_0; // 0x10
	::Class_1_BAEFE151626ED1A5* Field_1_1; // 0x18
	::RPG::GameCore::EntityRelationType Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8C20B8310FB0178A(::Class_1_BAEFE151626ED1A5* a1, ::RPG::GameCore::EntityRelationType a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BAEFE151626ED1A5*, ::RPG::GameCore::EntityRelationType))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_8C20B8310FB0178A_OFFSET))(this, a1, a2);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_724A3C2692D2F7EA(::RPG::GameCore::EntityRelationMemberType a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_724A3C2692D2F7EA_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_99D5CA958F67E07B(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_99D5CA958F67E07B_OFFSET))(this, a1);
	}

	::System::Void Method_1_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_1_DB67EEFB041425EC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_DB67EEFB041425EC_OFFSET))(this);
	}

	::System::Void Method_1_D3B45CC300E6D4AB(::RPG::GameCore::EntityRelationMemberType a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_D3B45CC300E6D4AB_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::EntityRelationMemberType Method_1_272E83D05B98F419(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::EntityRelationMemberType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_272E83D05B98F419_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_7EBFF01BB23D374B(::RPG::GameCore::EntityRelationMemberType a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::EntityRelationMemberType))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_7EBFF01BB23D374B_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::RPG::GameCore::EntityRelationType Method_1_93637CD7AE4EB538()
	{
		return ((::RPG::GameCore::EntityRelationType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_93637CD7AE4EB538_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BD5E51775B324A7D_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
