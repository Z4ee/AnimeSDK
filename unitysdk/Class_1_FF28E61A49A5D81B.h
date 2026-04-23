#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/ChangeType.h"
#include "unitysdk/Struct_2_D2B3E955BE4945AB.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_30;
class Class_0_16E4307DCC419505_32;
namespace Entitas { class IComponent; }
namespace Entitas { class IEntity; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define CLASS_1_FF28E61A49A5D81B_METHOD_1_07F4353DEF2C16E3_OFFSET UNITYSDK_OFFSET(0x17BE0400)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_1A1A36419CDC4FB5_OFFSET UNITYSDK_OFFSET(0x17BE0670)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_498D322967FF8B78_1_OFFSET UNITYSDK_OFFSET(0x17BE0950)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_498D322967FF8B78_2_OFFSET UNITYSDK_OFFSET(0x17BE0AA0)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_498D322967FF8B78_OFFSET UNITYSDK_OFFSET(0x17BE0530)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_B0A94119BC3B7709_OFFSET UNITYSDK_OFFSET(0x17BE0BF0)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_B1476C314B32BFD8_OFFSET UNITYSDK_OFFSET(0x17BE0CA0)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_CF780FC3D0CB1833_OFFSET UNITYSDK_OFFSET(0x17BDFB50)
#define CLASS_1_FF28E61A49A5D81B_METHOD_1_DB48E0A4843461B4_OFFSET UNITYSDK_OFFSET(0x17BDFDE0)
#define CLASS_1_FF28E61A49A5D81B__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDFCD0)

inline static constexpr unsigned int Class_1_FF28E61A49A5D81B_TypeDefinitionIndex = 34359;

class Class_1_FF28E61A49A5D81B : public ::System::Object
{
public:
	static ::Class_1_FF28E61A49A5D81B** StaticGet_Field_1_3()
	{
		return (::Class_1_FF28E61A49A5D81B**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF28E61A49A5D81B_TypeDefinitionIndex)->GetStaticField(0x69F80);
	}
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_32*>*>* Field_1_1; // 0x10
	::System::Collections::Generic::Queue_1<::Struct_2_D2B3E955BE4945AB>* Field_1_2; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_0_16E4307DCC419505_32*>* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B__CTOR_OFFSET))(this);
	}

	static ::Class_1_FF28E61A49A5D81B* Method_1_CF780FC3D0CB1833()
	{
		return ((::Class_1_FF28E61A49A5D81B*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_CF780FC3D0CB1833_OFFSET))();
	}

	::System::Void Method_1_DB48E0A4843461B4(::Class_0_16E4307DCC419505_32* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_32*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_DB48E0A4843461B4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_07F4353DEF2C16E3(::System::Type* a1, ::System::Type* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_07F4353DEF2C16E3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_498D322967FF8B78(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_498D322967FF8B78_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_498D322967FF8B78_1(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_498D322967FF8B78_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_498D322967FF8B78_2(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::Class_0_16E4307DCC419505_30* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_498D322967FF8B78_2_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B0A94119BC3B7709(::Entitas::IEntity* a1, ::Entitas::IComponent* a2, ::RPG::Client::LittleGameShare::ChangeType a3, ::Class_0_16E4307DCC419505_30* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*, ::Entitas::IComponent*, ::RPG::Client::LittleGameShare::ChangeType, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_B0A94119BC3B7709_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_B1476C314B32BFD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_B1476C314B32BFD8_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_32* Method_1_1A1A36419CDC4FB5(::System::Type* a1, ::System::Type* a2)
	{
		return ((::Class_0_16E4307DCC419505_32*(*)(::PVOID, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_FF28E61A49A5D81B_METHOD_1_1A1A36419CDC4FB5_OFFSET))(this, a1, a2);
	}
};
