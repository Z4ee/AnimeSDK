#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_554535650EEC6F9F;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_7F53DAEE65D0F068_METHOD_1_117B99693C4485BB_OFFSET UNITYSDK_OFFSET(0x139D0760)
#define CLASS_1_7F53DAEE65D0F068_METHOD_1_68A82D6C8CD23790_OFFSET UNITYSDK_OFFSET(0x139D1160)
#define CLASS_1_7F53DAEE65D0F068_METHOD_1_6D0F9F165F6E3166_OFFSET UNITYSDK_OFFSET(0x139D0E30)
#define CLASS_1_7F53DAEE65D0F068_METHOD_1_9D8AE4F5540B3D65_OFFSET UNITYSDK_OFFSET(0x139D0A90)
#define CLASS_1_7F53DAEE65D0F068_METHOD_1_F67761DD656CF01E_OFFSET UNITYSDK_OFFSET(0x139D1830)
#define CLASS_1_7F53DAEE65D0F068_METHOD_1_FC68B1BB382A7FE6_OFFSET UNITYSDK_OFFSET(0x139D16E0)
#define CLASS_1_7F53DAEE65D0F068__CTOR_OFFSET UNITYSDK_OFFSET(0x139D19B0)

inline static constexpr unsigned int Class_1_7F53DAEE65D0F068_TypeDefinitionIndex = 60407;

class Class_1_7F53DAEE65D0F068 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_117B99693C4485BB(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068_METHOD_1_117B99693C4485BB_OFFSET))(this, a1);
	}

	::System::Void Method_1_68A82D6C8CD23790(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068_METHOD_1_68A82D6C8CD23790_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_9D8AE4F5540B3D65(::System::IO::BinaryWriter* a1, ::Class_1_554535650EEC6F9F* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::Class_1_554535650EEC6F9F*))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068_METHOD_1_9D8AE4F5540B3D65_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FC68B1BB382A7FE6(::System::IO::BinaryReader* a1, ::Class_1_554535650EEC6F9F* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::Class_1_554535650EEC6F9F*))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068_METHOD_1_FC68B1BB382A7FE6_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_6D0F9F165F6E3166(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068_METHOD_1_6D0F9F165F6E3166_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F67761DD656CF01E(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_7F53DAEE65D0F068_METHOD_1_F67761DD656CF01E_OFFSET))(a1, a2);
	}
};
