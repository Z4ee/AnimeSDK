#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AF67E01114A98070;
namespace RPG::Client { class GridFightGameFormation; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class BinaryWriter; }

#define CLASS_1_0152034704339E5F_METHOD_1_41B99FF8B32B4FB9_OFFSET UNITYSDK_OFFSET(0x157D8AA0)
#define CLASS_1_0152034704339E5F_METHOD_1_48369A8350D0E05F_OFFSET UNITYSDK_OFFSET(0x157D7880)
#define CLASS_1_0152034704339E5F_METHOD_1_53F0C3FDF4253E23_OFFSET UNITYSDK_OFFSET(0x157D7D20)
#define CLASS_1_0152034704339E5F_METHOD_1_70A315D0B7560E04_OFFSET UNITYSDK_OFFSET(0x157D8510)
#define CLASS_1_0152034704339E5F_METHOD_1_BD2C57AECE841CDE_OFFSET UNITYSDK_OFFSET(0x157D9090)
#define CLASS_1_0152034704339E5F_METHOD_1_F8058EA34467CF3D_OFFSET UNITYSDK_OFFSET(0x157D94E0)
#define CLASS_1_0152034704339E5F__CTOR_OFFSET UNITYSDK_OFFSET(0x157D97F0)

inline static constexpr unsigned int Class_1_0152034704339E5F_TypeDefinitionIndex = 64682;

class Class_1_0152034704339E5F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F__CTOR_OFFSET))(this);
	}

	::Il2CppArray<::System::Byte>* Method_1_48369A8350D0E05F(::RPG::Client::GridFightGameFormation* a1)
	{
		return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F_METHOD_1_48369A8350D0E05F_OFFSET))(this, a1);
	}

	::System::Void Method_1_41B99FF8B32B4FB9(::RPG::Client::GridFightGameFormation* a1, ::Il2CppArray<::System::Byte>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGameFormation*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F_METHOD_1_41B99FF8B32B4FB9_OFFSET))(this, a1, a2);
	}

	static ::System::Void Method_1_53F0C3FDF4253E23(::System::IO::BinaryWriter* a1, ::Class_1_AF67E01114A98070* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::Class_1_AF67E01114A98070*))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F_METHOD_1_53F0C3FDF4253E23_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_BD2C57AECE841CDE(::System::IO::BinaryReader* a1, ::Class_1_AF67E01114A98070* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::Class_1_AF67E01114A98070*))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F_METHOD_1_BD2C57AECE841CDE_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_70A315D0B7560E04(::System::IO::BinaryWriter* a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryWriter*, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F_METHOD_1_70A315D0B7560E04_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_F8058EA34467CF3D(::System::IO::BinaryReader* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
	{
		return ((::System::Void(*)(::System::IO::BinaryReader*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_1_0152034704339E5F_METHOD_1_F8058EA34467CF3D_OFFSET))(a1, a2);
	}
};
